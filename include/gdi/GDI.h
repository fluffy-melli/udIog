// GDI.h
#ifndef GDI_H
#define GDI_H

#include <windows.h>
#include <Gdiplus.h>

using namespace Gdiplus;

void GDI_Init(ULONG_PTR &token);

void GDI_Release(ULONG_PTR token);

#endif // GDI_H
