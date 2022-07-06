#include "point.h"
#include <math.h>

long double calculate_distance_from_origin(const Point const* point){
    return sqrt((point->x * point->x) + (point->y * point->y));
}

const Point *get_point_farther_to_origin(const Point *p1, const Point*p2)
{
    double p1DistanceFromOrigin = calculate_distance_from_origin(p1);
    double p2DistanceFromOrigin = calculate_distance_from_origin(p2);
    return p1DistanceFromOrigin > p2DistanceFromOrigin ? p1 : p2;
}