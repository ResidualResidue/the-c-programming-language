#include <stdio.h>

/*
    1.7 Functions.
*/

int power(int, int);

int main(){

    printf("%d\n", power(5, 3));
    return 0;
}

/*
    returns x**y
*/
int power(int x, int y){
    int i, result;
    result=1;
    for(i=0; i<y; i++){
        result *= x;
    }
    return result;
}