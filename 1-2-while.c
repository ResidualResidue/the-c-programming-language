#include <stdio.h>

float get_celcius(float);

int main(){
    printf("Farenheight to Celcius table: \n");
    float farenheight = 0;
    float celcius = 0;
    while(farenheight <= 300){
        celcius = get_celcius(farenheight);
        printf("%3.0f %7.1f\n", farenheight, celcius);
        farenheight+=20;
    }
    return 0;
}

float get_celcius(float farenheight){
    return (farenheight - 32.0) * (5.0/9);
}