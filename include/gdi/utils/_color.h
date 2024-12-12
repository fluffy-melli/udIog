// color.h
#ifndef COLOR_H
#define COLOR_H

struct C_RGBA {
    int R;
    int G;
    int B;
    int A;

    C_RGBA(int r = 0, int g = 0, int b = 0, int a = 255) : R(r), G(g), B(b), A(a) {}
};

struct C_RGB {
    int R;
    int G;
    int B;

    C_RGB(int r = 0, int g = 0, int b = 0) : R(r), G(g), B(b) {}
};

#endif // COLOR_H