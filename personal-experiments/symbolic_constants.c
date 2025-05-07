#include <stdio.h>

// Define constatns
#define LOWER 0
#define UPPER 100
#define STEP 20
#define MESSAGE "Current skill level: %d\n"

// Define expression
#define INCREASE_STEP(i) (i+=STEP)

int main(){
    int i;
    for(i=LOWER; i<=UPPER;INCREASE_STEP(i)){
        printf(MESSAGE, i);
    }

    return 0;
}