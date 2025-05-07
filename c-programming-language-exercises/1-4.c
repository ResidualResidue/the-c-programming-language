#include <stdio.h>

float get_farenheight(float);

int main(){
    int lower, upper, step;
    lower=0; upper=300; step=20;

    float celcius, farenheight;
    celcius = 0;
    printf("Celc  |  Farn\n");
    printf("============\n");

    while(celcius <= 300){
        farenheight = get_farenheight(celcius);
        printf("%5.0f | %6.1f\n", celcius, farenheight);
        celcius+=20;
    }

    return 0;
}

float get_farenheight(float celcius){
    return celcius * (9.0/5.0) + 32;
}