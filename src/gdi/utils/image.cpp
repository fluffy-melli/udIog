#include "../../../include/gdi/utils/image.h"

void Draw_Image(HDC* hdc, Gdiplus::Bitmap* image, Location location) {
    HDC hdcMem = NULL;
    HBITMAP hImage = NULL;
    hdcMem = CreateCompatibleDC(*hdc);
    if (image != nullptr) {
        image -> GetHBITMAP(Color(100,100,100), &hImage);
        if (hImage) {
            UINT width  = image -> GetWidth();
            UINT height = image -> GetHeight();
            HBITMAP hOldBitmap = (HBITMAP) SelectObject(hdcMem, hImage);
            TransparentBlt(*hdc, location.x, location.y, width, height, hdcMem, 0, 0, width, height, RGB(100,100,100));
            SelectObject(hdcMem, hOldBitmap);
            DeleteObject(hImage);
        }
    } else {
        std::cerr << "Bitmap is nullptr." << std::endl;
    }
    DeleteDC(hdcMem);
}