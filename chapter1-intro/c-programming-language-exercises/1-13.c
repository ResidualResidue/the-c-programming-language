#include <stdio.h>

/*
    Write a program to print a histogram of the lengths of various words in its input.
    Horizontal bars are easy. Vertical is hard.
*/
#define IN_WORD 0
#define OUT_WORD 1

#define GROUP_COUNT 10

int main(){
    /*
        3 or less... 12 or more. 
    */
    int histogram_groups[GROUP_COUNT];
    int c, state, current_word_length, i, j;
    char* histogram_group;
    current_word_length = 0;
    state = OUT_WORD;

    for(i=0; i<GROUP_COUNT; i++)
        histogram_groups[i] = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(state == IN_WORD){
                if(current_word_length <= 3)
                    histogram_groups[0]++;
                else if(current_word_length >= 12)
                    histogram_groups[9]++;
                else
                    histogram_groups[current_word_length - 3]++;
                state = OUT_WORD;
                current_word_length = 0;
            }
        }else{
            state = IN_WORD;
            current_word_length++;            
        }
    }
    if(state == IN_WORD){
        if(current_word_length <= 3)
            histogram_groups[0]++;
        else if(current_word_length >= 12)
            histogram_groups[9]++;
        else
            histogram_groups[current_word_length - 3]++;
    }

    for(i=0; i<GROUP_COUNT; i++){
        
        printf("%d:\t", (i+3));
        for(j=0;j<histogram_groups[i];j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}