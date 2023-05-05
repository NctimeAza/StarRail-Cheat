using namespace hoyo_mtr_sdk;

DO_APP_FUNC(0x00001240, 0x00001240, int64_t, PrintFn, (const char *fmt, ...));
DO_APP_FUNC(0x000255A0, 0x000255A0, int64_t, DumpSomethingFn, (void *a1, const char *fmt, ...));
DO_APP_FUNC(0x000254D0, 0x000254D0, int64_t, AnotherDumpFn, (void *a1, const char *fmt, ...));
DO_APP_FUNC(0x0002A4C0, 0x0002A4C0, int64_t, DumpRequestFn, (void *a1, void *a2));