#include <stdio.h>

#define LOWER 0 /* Lower limit of table */
#define UPPER 300 /* Upper limit of table */
#define STEP 20 /* The amount by which we increment the left part of the table */

float convert_fahr_to_celc(int fahr);
float convert_celc_to_fahr(int celc);

int main(){
    short fahr;
    short celc;

    printf("Fahr | Celcius\n");
    printf("===============\n");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        printf("%3d  |  %6.1f\n", fahr, convert_fahr_to_celc(fahr));
    }

    printf("\n\n\n");

    printf("Celc |    Fahr\n");
    printf("===============\n");
    for(celc = UPPER; celc >= LOWER; celc -= STEP){
        printf("%3d  |  %6.1f\n", celc, convert_celc_to_fahr(celc));
    }
    

    return 0;
}

float convert_fahr_to_celc(int fahr){
    return (5.0/9.0) * (fahr-32);
}

float convert_celc_to_fahr(int celc){
    return (celc * 9.0/5.0) + 32;
}