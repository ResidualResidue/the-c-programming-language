#include <stdio.h>

/*
Symbolic constants -- define a constant to be a particular string of characters.
After defining these, any occurance of the name will be replaced by corresponding replacement text
*/
#define LOWER 0
#define UPPER 300
#define STEP 20

float get_celcius(int);


int main(){
    int farenheight;
    float celcius;
    printf("Farenheight |     Celcius\n");
    printf("============ ============\n");
    for(farenheight=LOWER; farenheight<=UPPER; farenheight+=STEP){
        celcius = get_celcius(farenheight);
        printf("%11d | %11.1f\n", farenheight, celcius);
    }

    return 0;
}

float get_celcius(int farenheight){
    return (5.0 / 9.0) * (farenheight-32);
}