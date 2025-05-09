#include <stdio.h>
/*
    Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

#define IN_BLANK 0
#define OUT_BLANK 1

int main(){
    short state,c;
    state = OUT_BLANK; 
    while((c=getchar()) != EOF){
        
        if(c == ' ' || c == '\t' || c == '\n'){
            if(state == OUT_BLANK)
                putchar(c);
            state = IN_BLANK;
        }else{
            putchar(c);
            state = OUT_BLANK;
        }
        
        
    }
    return 0;
}