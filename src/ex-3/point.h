#ifndef __POINT_H__ // Header guard.
#define __POINT_H__

#include <stdint.h>

typedef struct Point {
    double x;
    double y;
} Point;

const Point *get_point_farther_to_origin(const Point *p1, const Point *p2);

#endif // __POINT_H__