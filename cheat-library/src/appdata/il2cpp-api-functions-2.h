
const Il2CppAssembly **il2cpp_domain_get_assemblies(const Il2CppDomain *domain, size_t *size);
size_t il2cpp_image_get_class_count(const Il2CppImage *image);
const char *il2cpp_image_get_name(const Il2CppImage *image);
const char *il2cpp_image_get_filename(const Il2CppImage *image);
const char *il2cpp_method_get_param_name(const MethodInfo *method, uint32_t index);
uint32_t il2cpp_property_get_flags(PropertyInfo *prop);
const MethodInfo *il2cpp_property_get_get_method(PropertyInfo *prop);
const MethodInfo *il2cpp_property_get_set_method(PropertyInfo *prop);
const char *il2cpp_property_get_name(PropertyInfo *prop);
