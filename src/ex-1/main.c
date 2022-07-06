#include <stdio.h>  //printf.

#define NUM_TIMES_TO_PRINT 53
#define TEMPLATE_STRING "Mamas %d Empire!\n"

int main(void)
{
    for(unsigned long long int i = 1; i <= NUM_TIMES_TO_PRINT; i++){
        printf(TEMPLATE_STRING, i);
    }
    return 0;
}