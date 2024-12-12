// fill.h
#ifndef FILL_H
#define FILL_H

#include "./_color.h"
#include "./_location.h"
#include "../DC.h"

void Reset(Graphic n_hdc);

void Fill_Rect(Graphic n_hdc, RGBA color, ToLocation location);

#endif // FILL_H
