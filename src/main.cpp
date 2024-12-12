#include <windows.h>
#include <Gdiplus.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/gdi/DC.h"
#include "../include/gdi/BIT.h"
#include "../include/gdi/utils/fill.h"

using namespace Gdiplus;

int main() {
    Graphic n_hdc = New_Graphic();
    n_hdc.bitmap.resize(1);
    n_hdc.bitmap[0] = New_Bitmap(L"./image.png");
    while (true) {
        Reset(n_hdc);
        Fill_Rect(n_hdc, RGBA{100,200,200,50}, ToLocation{100,100,400,200});
        Draw_Image(n_hdc, 0, Location{500,200});
        Peek(n_hdc);
    }

    return 0;
}
