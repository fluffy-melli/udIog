#include "../../../include/gdi/utils/fill.h"

void Reset(Graphic n_hdc) {
    SolidBrush reset(Color(0, 0, 0, 0));
    n_hdc.graphics -> FillRectangle(&reset, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
}

void Fill_Rect(Graphics* graphic, C_RGBA color, ToLocation location) {
    SolidBrush brush(Color(color.A, color.R, color.G, color.B));
    graphic -> FillRectangle(&brush, location.x1, location.y1, location.x2, location.y2);
}