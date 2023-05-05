#include "pch-il2cpp.h"
#include "EntityManager.h"

#include <helpers.h>

#include "Chest.h"

namespace cheat::game
{

	EntityManager& EntityManager::instance()
	{
		static EntityManager instance;
		return instance;
	}

	std::vector<app::BaseEntity*> EntityManager::rawEntities()
	{
		return {};
	}

	std::vector<Entity*> EntityManager::entities()
	{
		std::vector<Entity*> entityVector;
		for (auto& rawEntity : rawEntities())
		{
			auto ent = entity(rawEntity);
			if (ent != s_EmptyEntity)
				entityVector.push_back(ent);
		}
		return entityVector;
	}

	std::vector<Entity*> EntityManager::entities(const IEntityFilter& filter)
	{
		std::vector<Entity*> entityVector;
		for (auto& entity : entities())
		{
			if (filter.IsValid(entity))
				entityVector.push_back(entity);
		}

		return entityVector;
	}

	std::vector<Entity*> EntityManager::entities(Validator validator)
	{
		std::vector<Entity*> entityVector;
		for (auto& entity : entities())
		{
			if (validator(entity))
				entityVector.push_back(entity);
		}

		return entityVector;
	}

	cheat::game::Entity* EntityManager::entity(uint32_t runtimeID, bool unsafe)
	{
		return {};
	}

	cheat::game::Entity* EntityManager::avatar()
	{
		return {};
	}

	bool EntityManager_RemoveEntity_Hook(app::MoleMole_EntityManager* __this, app::BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method)
	{
		EntityManager::instance().OnRawEntityDestroy(entity);
		return CALL_ORIGIN(EntityManager_RemoveEntity_Hook, __this, entity, specifiedRuntimeID, method);
	}

	void EntityManager::OnRawEntityDestroy(app::BaseEntity* rawEntity)
	{
		if (rawEntity == nullptr)
			return;

		std::lock_guard<std::mutex> lock(m_EntityCacheLock);
		if (m_EntityCache.count(rawEntity) == 0)
			return;

		entityDestroyEvent(m_EntityCache[rawEntity].first);

		delete m_EntityCache[rawEntity].first;

		m_EntityCache.erase(rawEntity);
	}

	EntityManager::EntityManager() : m_AvatarEntity(nullptr)
	{
		HookManager::install(app::MoleMole_EntityManager_RemoveEntity, EntityManager_RemoveEntity_Hook);
	}

	cheat::game::Entity* EntityManager::entity(app::BaseEntity* rawEntity)
	{
		if (rawEntity == nullptr || !app::MoleMole_BaseEntity_IsActive(rawEntity, nullptr))
			return s_EmptyEntity;

		std::lock_guard<std::mutex> lock(m_EntityCacheLock);
		if (m_EntityCache.count(rawEntity) > 0)
		{
			auto& entry = m_EntityCache[rawEntity];
			if (rawEntity->fields._runtimeID_k__BackingField == entry.second)
				return entry.first;

			delete m_EntityCache[rawEntity].first;
			m_EntityCache.erase(rawEntity);

			entityDestroyEvent(entry.first);
		}

		if (app::MoleMole_BaseEntity_get_rootGameObject(rawEntity, nullptr) == nullptr)
			return s_EmptyEntity;

		Entity* ent = new Entity(rawEntity);
		if (ent->isChest())
		{
			delete ent;
			ent = new Chest(rawEntity);
		}

		m_EntityCache[rawEntity] = { ent, ent->runtimeID() };
		return ent;
	}

	app::CameraEntity* EntityManager::mainCamera()
	{
		return {};
	}
}