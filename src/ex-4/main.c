#include "rectangle.h"
#include <stdio.h>

void print_rectangle(const Rectangle* rect){
    printf("length = %f width = %f\n", rect->length, rect->width);
}

int main(void)
{
    Rectangle rectangle1 = {5, 6};
    print_rectangle(&rectangle1);
}