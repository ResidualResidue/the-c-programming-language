#include <stdio.h>

int main(){
    // Just some size experiments
    long nc;
    int nc1;
    long long nc2;

    /* 
        Add these to the mystery listery. Why are they 0.000000?
    */
    double nc3;
    float nc4;
    printf("SIZES");
    printf("long: %ld int: %d long long: %lld double: %lf float: %f\n", sizeof(nc), sizeof(nc1), sizeof(nc2), sizeof(nc3), sizeof(nc4));

    return 0;
}