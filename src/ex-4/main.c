#include "rectangle.h"
#include <stdio.h>

void print_rectangle(const Rectangle* rect){
    printf("length = %f width = %f\n", rect->length, rect->width);
}

int main(void)
{
    Rectangle rect1 = {5, 6};
    Rectangle rect2 = {12, 12};
    printf("Rectangle 1 = ");
    print_rectangle(&rect1);
    printf("Rectangle 2 = ");
    print_rectangle(&rect2);
    printf("Area of the rectangle 1: %f\n", calculate_area_of_rectangle(&rect1));
    printf("Area of the rectangle 2: %f\n", calculate_area_of_rectangle(&rect2));
    printf("Rectangle with the bigger area: %s\n", get_rectangle_with_bigger_area(&rect1, &rect2) == &rect1 ? "Rectangle 1" : "Rectangle 2");
    printf("Can rectangle 2 contain rectangle 1: %s\n", can_rectangle_contain_rectangle(&rect2, &rect1) ? "True" : "False");
    printf("Can rectangle 1 contain rectangle 2: %s\n", can_rectangle_contain_rectangle(&rect1, &rect2) ? "True" : "False");
}