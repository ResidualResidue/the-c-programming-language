/*
    Create 2 structs.
    Variables should contain an array declared as int i[10] and an array declared as int *j.
    See if there's any behavioral differences.

    What I suspect is that i will be memory stored on the stack and so it will be memory directly copied from one struct to the next.
    Whereas j will copy the pointer and both structs will point to the same array rather than 2 different arrays of the same value.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

typedef struct{
    int a[LEN];
    int *b;
} strange_mem;

void initialize_array(int *a);

int main(){
    strange_mem a, b;
    a.b = malloc(LEN * sizeof(int));

    initialize_array(a.a);
    initialize_array(a.b);
    
    printf("%d %d\n", a.a[3], a.b[3]);

    b = a;
    
    b.a[3] = 100;
    b.b[3] = 100;
    printf("%d %d\n", a.a[3], a.b[3]); // As expected, structs a and b "own" array a, but share array b.

    return 0;
}
void initialize_array(int *a){
    int i;
    for(i=0;i<LEN;i++){
        a[i] = i;
    }
}
