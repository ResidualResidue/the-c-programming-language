#include <stdio.h>
float get_celcius(int);


int main(){
    int farenheight;
    float celcius;
    printf("Farenheight |     Celcius\n");
    printf("============ ============\n");
    for(farenheight=0; farenheight<=300; farenheight+=20){
        celcius = get_celcius(farenheight);
        printf("%11d | %11.1f\n", farenheight, celcius);
    }

    return 0;
}

float get_celcius(int farenheight){
    return (5.0 / 9.0) * (farenheight-32);
}