// location.h
#ifndef LOCATION_H
#define LOCATION_H

struct Location {
    int x;
    int y;

    Location(int x = 0, int y = 0) : x(x), y(y) {}
};

struct ToLocation {
    int x1;
    int y1;
    int x2;
    int y2;

    ToLocation(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) : x1(x1), y1(y1), x2(x2), y2(y2) {}
};

#endif // LOCATION_H