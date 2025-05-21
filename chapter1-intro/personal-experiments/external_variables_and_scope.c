#include <stdio.h>
void foo();

// External variable common to all functions.
int e = 314159;

int main(){
    int c = 10;
    printf("%d\n", c);
    printf("External var from main, before foo: %d\n", e);


    foo();
    printf("External var from main, after foo: %d\n", e);


}

void foo(){

    /*
        Variable c does not retain its value from main.
        
        Local or "automatic" variables live and die within the function. Not setting them from one function to the next, 
        you will get junk trying to access them.
    */
    int c;
    int d;

    extern int e;
    printf("External var in foo: %d\n", e);
    e = 15;

    printf("%d %d\n", c, d); 
}