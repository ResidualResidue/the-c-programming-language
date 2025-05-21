#include <stdio.h>
// #include <string.h>

unsigned long strlen(char s[]){
    unsigned long i;
    i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

int main(){
    long x;
    unsigned int y;
    double f;
    x = 0;
    x += 1234; // Integer constants written like so.
    x += 1234L; //long constatns written with a terminal L.
    printf("%ld\n", x);

    x+= 11111111111111111; // Integer constatns too big to fit into an int will automatically be longs.
    printf("%ld\n", x);

    y = 3000000000; // Would this be a long or an unsigned int? Guess it could be either. Could be written with terminal u or ul (unsigned int and unsigned long respectively).

    printf("%u\n", y);
    printf("%d\n", y);

    f = 1.002; // Floating constants are double unless terminated with f/F or lf/LF (float, long double)

    x = 0x10; // Hex prefaced with 0x
    y = 010; // Octal prefaced with 0

    printf("%ld\n", x);
    printf("%d\n", y);

    /* Additional Notes
        - Character constant is an integer
        - Some characters can be represented by octal or hex via escape sequences (\ooo or \xhh for octal and hex)
        - Null character \0 is numeric value 0.
        - String constants are arrays of characters. Always terminated by null char, so physical storage required is one more than the length.
    */

    printf("\xFE\n");

    printf("%lu\n", strlen("asdasdasd")); // Returns length of string minus null.

    return 0;
}