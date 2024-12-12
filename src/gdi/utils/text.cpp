#include "../../../include/gdi/utils/text.h"

void Draw_Text(HDC* hdc, C_RGB color, Location location, const std::wstring& text) {
    HFONT hFont = CreateFontW(
        24,
        0,
        0,
        0,
        FW_NORMAL,
        FALSE,
        FALSE,
        FALSE,
        ANSI_CHARSET,
        OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS,
        DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE,
        L"Arial"
    );

    if (hFont == NULL) {
        std::cerr << "Font Creaft Fail!" << std::endl;
        return;
    }
    int oldBkMode = SetBkMode(*hdc, TRANSPARENT);
    HFONT hOldFont = (HFONT) SelectObject(*hdc, hFont);
    SetTextColor(*hdc, RGB(color.R,color.G,color.B));
    TextOutW(*hdc, location.x, location.y, text.c_str(), text.length());
    SelectObject(*hdc, hOldFont);
    SetBkMode(*hdc, oldBkMode);
    DeleteObject(hFont);
}
