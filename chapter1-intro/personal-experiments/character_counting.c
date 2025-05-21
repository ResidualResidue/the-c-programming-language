#include <stdio.h>
int while_method(int);
int for_method(int);
int count_lines();
int count_words();

#define IN_WORD 0
#define OUT_WORD 1

int main(){

    int wc = 0;
    wc = count_words();
    printf("%d\n", wc);
    
    return 0;
}

/*
    1.5.2 Counting Characters
*/
int while_method(int nc){
    nc = 0;
    while(getchar() != EOF)
        ++nc; // nc++ and ++nc are different in there value as expressions.
    return nc;
}

int for_method(int nc){
    for(nc=0; getchar() != EOF; nc++)
        ;
    return nc;
}


/*
    1.5.3 Counting Lines
*/

int count_lines(){
    int lc;
    short c;
    lc = 1;

    while((c = getchar()) != EOF)
        if(c == '\n')
            lc++;
    return lc;
}

/*
    1.5.4 Word Counting
*/

int count_words(){
    short wc, c, state;
    wc = 0; state = OUT_WORD;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT_WORD;
        }else{
            if(state == OUT_WORD){
                wc++;
                state = IN_WORD;
            }
        }
    }
    return wc;

}