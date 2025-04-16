
#include <stdio.h>
float convert_celc(int far);

float convert_far(int celc);

int main(){

    int index, upper, step;
    float far, celc;
    index = 0;
    upper = 300;
    step = 20;
    printf("Far  |     Celcius\n");
    printf("==================\n");
    while(index <= upper){
        far = index;
        printf("%3.0f  |  %10.1f\n", far, convert_celc(far));
        index+=step;
    }
    printf("\n\n\n");
    index = 0;
    upper = 300;
    step = 20;

    printf("Celc | Farenheight\n");
    printf("==================\n");
    while(index <= upper){
        celc = index;
        printf("%3.0f  |  %10.1f\n", celc, convert_far(celc));
        index+=step;
    }

    return 0;
}

float convert_celc(int far){
    return (5.0/9.0) * (far-32);
}
float convert_far(int celc){
    return ( 9.0 / 5.0 * celc) + 32;
}