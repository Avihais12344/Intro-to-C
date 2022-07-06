#include "point.h"
#include <stdio.h>

void print_point(const Point* p){
    printf("(%f, %f)\n", p->x, p->y);
}

int main(void){
    // two ways to initialize a struct.
    Point p1 = {.x = 1, .y = 1};
    Point p2;
    p2.x = -2;
    p2.y = 1;
    printf("p1 = ");
    print_point(&p1);
    printf("p2 = ");
    print_point(&p2);
    printf("The point that is farther from the origin (0, 0) is = ");
    print_point(get_point_farther_to_origin(&p1, &p2));
}