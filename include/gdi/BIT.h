// BIT.h
#ifndef BIT_H
#define BIT_H

#include <windows.h>
#include <gdiplus.h>
#include <iostream>
#include "./DC.h"
#include "./utils/_location.h"

using namespace Gdiplus;

Gdiplus::Bitmap* New_Bitmap(const wchar_t * filePath);

void Draw_Image(Graphic n_hdc, int number, Location location);

#endif // BIT_H
