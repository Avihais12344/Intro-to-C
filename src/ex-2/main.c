#include <stdio.h>
#include <stdint.h>

uint64_t fibonacci(uint64_t index)
{
    if(index == 0){
        return 0;
    }
    else if(index == 1){
        return 1;
    }
    uint64_t currentNumber = 1;
    uint64_t prevNumber = 0;
    for(uint64_t i = 2; i <= index; i++){
        uint64_t tempHolder = currentNumber;
        currentNumber += prevNumber;
        prevNumber = tempHolder;
    }
    return currentNumber;
}

int main(void){
    printf("%d\n", fibonacci(0));
    return 0;
}