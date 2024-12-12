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