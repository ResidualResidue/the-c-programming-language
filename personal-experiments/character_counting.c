#include <stdio.h>
int while_method(int);
int for_method(int);
int count_lines();

int main(){

    int lc;
    lc = count_lines();
    printf("%d\n", lc);
    
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