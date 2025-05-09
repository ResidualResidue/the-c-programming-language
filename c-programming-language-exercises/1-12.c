#include <stdio.h>
/*
    Write a program that prints its input one word per line.
*/

#define IN_WORD 0
#define OUT_WORD 1

int main(){

    int state, c;
    state = OUT_WORD;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            state=OUT_WORD;
        }else{
            if(state == OUT_WORD){
                putchar('\n');
                putchar(c);
                state = IN_WORD;
            }else{
                putchar(c);
            }
        }
    }

    return 0;
}
