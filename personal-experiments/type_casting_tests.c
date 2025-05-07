#include <stdio.h>

int main(){
    printf("Two ints are an int: %d\n", 5 / 9);
    printf("Int dividend and float divisor make a float: %f\n", 5 / 9.0);
    printf("Float dividend and int divisor make a float: %f\n", 5.0 / 9);
    printf("Float dividend and float divisor make a float: %f\n", 5.0 / 9.0);
    printf("Float times an int makes a float: %f\n", (5.0 / 9.0) * 32);
    printf("Int minus a float makes a float: %f\n", 5 - 2.5);
    printf("Int plus a float makes a float: %f\n", 5 + 2.5);
    return 0;
}