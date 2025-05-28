#include <stdio.h>

int main(){
    int a,b;
    int *c;

    printf("sizeof(a) = %d || sizeof(c) = %d\n", sizeof(a), sizeof(c));

    a =42;
    b =420;
    c =&a;

    printf("a=%d &a=%p\nb=%d &b=%p\nc=%p *c=%d\n", a, &a, b, &b, c, *c);
    c -=1; // Some magic happens post-compilation to make sure that c is decremented by the size of the variable it's pointing to.
    printf("a=%d &a=%p\nb=%d &b=%p\nc=%p *c=%d\n", a, &a, b, &b, c, *c);

    *c = 500000; // Dereferencing a pointer. Works with the value the poitner is pointing to rather than the memory.
    printf("a=%d &a=%p\nb=%d &b=%p\nc=%p *c=%d\n", a, &a, b, &b, c, *c);

    /*
        Why pointers?
        pass by reference functions, rather than pass by value.
    */

}