// color.h
#ifndef COLOR_H
#define COLOR_H

struct RGBA {
    int R;
    int G;
    int B;
    int A;

    RGBA(int r = 0, int g = 0, int b = 0, int a = 255) : R(r), G(g), B(b), A(a) {}
};

struct RGB {
    int R;
    int G;
    int B;
};

#endif // COLOR_H