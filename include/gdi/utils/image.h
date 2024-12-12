// IMAGE.h
#ifndef IMAGE_H
#define IMAGE_H

#include <windows.h>
#include <iostream>
#include "../DC.h"
#include "./_location.h"

void Draw_Image(HDC* hdc, Gdiplus::Bitmap* image, Location location);

#endif // IMAGE_H
