#include <stdio.h>

#define NUMDIGITS 10

int main(){
    int i, c, wc, other;
    wc = other = 0;
    int digits[NUMDIGITS];

    // Initialize numdigits to 0.
    for(i=0; i< NUMDIGITS; i++){
        digits[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n')
            wc++;
        else if(c >= '0' && c <= '9')
            digits[c - '0']++;
        else
            other++;
    }

    printf("Whitespace: %d\nOther characters: %d\n", wc, other);
    printf("Digits: \n");
    for(i=0; i < NUMDIGITS; i++){
        printf("%d: %d\n", i, digits[i]);
    }

    return 0;
}