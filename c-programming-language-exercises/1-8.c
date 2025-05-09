#include <stdio.h>
/*
    Write a program to count blanks, tabs, and newlines.
*/

int main(){

    int wc, c;

    wc = 0;
    while((c = getchar()) != EOF)
        if(c == '\n' || c == '\t' || c == ' ')
            wc++;


    printf("Whitespace count (lines, tabs, spaces): %d\n", wc);

    return 0;
}