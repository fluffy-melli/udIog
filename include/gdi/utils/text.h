// TEXT.h
#ifndef TEXT_H
#define TEXT_H

#pragma once
#include <windows.h>
#include <iostream>
#include "./_location.h"
#include "./_color.h"
#include "../DC.h"

void Draw_Text(HDC* hdc, C_RGB color, Location location, const std::wstring& text);

#endif // TEXT_H
