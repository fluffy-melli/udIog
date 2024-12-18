// DC.h
#ifndef DC_H
#define DC_H

#include <windows.h>
#include <iostream>
#include <vector>
#include "./GDI.h"

struct Graphic {
    MSG msg;
    HDC hdc;
    ULONG_PTR address;
    Graphics* graphics;
    std::vector<Gdiplus::Bitmap*> bitmap;
};

Graphic New_Graphic();

void Peek(Graphic &n_hdc);

#endif // DC_H
