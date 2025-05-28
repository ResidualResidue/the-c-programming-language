#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;
void print_point(point p);
int main(){

    point p[10];
    int i;

    for(i = 0; i < 10; i++){
        p[i].x = i;
        p[i].y = 10-i;
        
    }

    for(i = 0; i < 10; i++){
        print_point(p[i]);
        
    }

    return 0;
}

void print_point(point p){
    printf("(%d, %d)\n", p.x, p.y);
}