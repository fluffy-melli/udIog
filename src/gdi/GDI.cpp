#include "../../include/gdi/GDI.h"

void GDI_Init(ULONG_PTR &token) {
    GdiplusStartupInput gdiplusStartupInput;
    GdiplusStartup(&token, &gdiplusStartupInput, NULL);
}

void GDI_Release(ULONG_PTR token) {
    GdiplusShutdown(token);
}