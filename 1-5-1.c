#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word
#define DIGIT_ARRAY_SIZE 10

int main(){
    char c;

    int ndigit[DIGIT_ARRAY_SIZE];
    int nwhite, nother, i;
    nwhite = nother = 0;

    for(i = 0; i < DIGIT_ARRAY_SIZE; i++ )
        ndigit[i] = 0;

    int state = OUT;

    long char_count = 0;
    int line_count = 1;
    int word_count = 0;

    while((c=getchar()) != EOF){
        char_count++;
        putchar(c);
        printf("::%d\n", c);
        if(c == '\n'){
            line_count++;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            nwhite++;
        }
        else if (state == OUT){
            state = IN;
            word_count++;
        }
        if(c >= '0' && c <= '9'){
            ndigit[c - '0']++;
        }

    }
    printf("Done!\n");
    printf("line_count: %d\n", line_count);
    printf("word_count: %d\n", word_count);
    printf("Whitespace count: %d\n", nwhite);
    printf("Digit counts: ");
    for(i = 0; i < DIGIT_ARRAY_SIZE; i++)
        printf("%d ", ndigit[i]);
    printf("\n");
    printf("other char count: %d\n", nother);
    printf("Total char count: %ld\n", char_count);

    return 0;
}