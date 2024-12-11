#include <windows.h>
#include <Gdiplus.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/gdi/DC.h"
#include "../include/gdi/utils/fill.h"

using namespace Gdiplus;

int main() {
    Graphic n_hdc = New_Graphic();
    while (true) {
        reset(n_hdc);
        fill(n_hdc,RGBA{100,200,200,50},ToLocation{100,100,400,200});

        Sleep(1);
        Peek(n_hdc);
    }

    return 0;
}
