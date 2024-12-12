#include "../../include/gdi/BIT.h"

Gdiplus::Bitmap* New_Bitmap(const wchar_t * filePath) {
    Gdiplus::Bitmap* bitmap = new Bitmap(filePath);
    if (bitmap -> GetLastStatus() != Ok) {
        std::cerr << "Failed to get Image Bitmap" << std::endl;
        delete bitmap;
        exit(EXIT_FAILURE);
    }
    return bitmap;
}

void Draw_Image(Graphic n_hdc, int number, Location location) {
    HDC hdcMem = NULL;
    HBITMAP hImage = NULL;
    hdcMem = CreateCompatibleDC(n_hdc.hdc);
    if (n_hdc.bitmap[number] != nullptr) {
        n_hdc.bitmap[number] -> GetHBITMAP(Color(100,100,100), &hImage);
        if (hImage) {
            UINT width  = n_hdc.bitmap[number] -> GetWidth();
            UINT height = n_hdc.bitmap[number] -> GetHeight();
            HBITMAP hOldBitmap = (HBITMAP) SelectObject(hdcMem, hImage);
            TransparentBlt(n_hdc.hdc, location.x, location.y, width, height, hdcMem, 0, 0, width, height, RGB(100,100,100));
            SelectObject(hdcMem, hOldBitmap);
            DeleteObject(hImage);
        }
    } else {
        std::cerr << "Bitmap at index " << number << " is nullptr." << std::endl;
    }
    DeleteDC(hdcMem);
}