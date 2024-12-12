#include <windows.h>
#include <Gdiplus.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/gdi/init.h"

using namespace Gdiplus;

int main() {
    Graphic n_hdc = New_Graphic();
    n_hdc.bitmap.resize(1);
    n_hdc.bitmap[0] = New_Bitmap(L"./image.png");
    while (true) {
        Reset(n_hdc);
        Fill_Rect(n_hdc.graphics, C_RGBA{100,200,200,50}, ToLocation{100,100,400,200});
        Draw_Image(&n_hdc.hdc, n_hdc.bitmap[0], Location{500,200});
        Draw_Text(&n_hdc.hdc, C_RGB{255,0,0}, Location{700,200}, L"test테스트");
        Peek(n_hdc);
    }

    return 0;
}
