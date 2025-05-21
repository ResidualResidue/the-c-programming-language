#include <stdio.h>

int main(){
    char a;
    short b;
    int c;
    long d;
    long long e;

    // Sizes are implementation specific.
    float f;
    double g;
    long double h;

    printf("Char size: %d\n", sizeof(a)); // 1
    printf("Short size: %d\n", sizeof(b)); // 2
    printf("Int size: %d\n", sizeof(c)); // 4
    printf("Long size: %d\n", sizeof(d)); // 8
    printf("Long long size: %d\n", sizeof(e)); // 8

    printf("Float size: %d\n", sizeof(f)); // 4
    printf("Double size: %d\n", sizeof(g)); // 8
    printf("Long double size: %d\n", sizeof(h)); // 8


    return 0;
}




