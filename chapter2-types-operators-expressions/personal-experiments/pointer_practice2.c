#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int x;
    int y;
} point;

void set_points(point *points, int length);
void print_points(point *points, int length);

int main(){
    int length;
    point *points;

    puts("Input number of points: ");
    scanf("%d", &length);

    points = malloc(length * sizeof(point));

    // printf("%p\n", &length);
    // printf("%p\n", &points);
    // printf("%p\n", points);
    // printf("%p\n", points + 1);

    set_points(points, length);
    print_points(points, length);

    return 0;
}

void set_points(point *points, int length){
    int i;
    for(i=0; i < length; i++){
        points[i].x = i;
        points[i].y = length - i;
    }
}

void print_points(point *points, int length){
    int i;
    for(i=0; i < length; i++){
        point p = *(points + i);
        printf("(%d, %d)\n", p.x, p.y);
    }
}