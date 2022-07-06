#include <stdio.h>
#include <stdint.h>

uint64_t get_sqrt(double num)
{
    uint64_t baseNumber = 0;
    uint64_t baseNumberPow = baseNumber * baseNumber;
    while(baseNumberPow < num)
    {
        baseNumber++;
        baseNumberPow = baseNumber * baseNumber;
    }
    return baseNumberPow == num ? baseNumber : baseNumber - 1;
}

int main(void){
    printf("sqrt of 4 is = %o", get_sqrt(4));
    return 0;
}