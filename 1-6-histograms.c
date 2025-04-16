#include <stdio.h>

#define MAX_WORD_LENGTH 12 // max length of word
void print_histogram(int);

int main(){
    char c, wl;
    int i;
    int histogram[MAX_WORD_LENGTH];
    wl = 0;
    for(i = 0; i < MAX_WORD_LENGTH; i++){
        histogram[i] = 0;
    }

    while((c = getchar()) != EOF){
        if((c == '\t' || c == '\n' || c == ' ')){
            if(wl > MAX_WORD_LENGTH){
                printf("Encountered word longer than max length.");
                return 1;
            }
            if(wl > 0)
                histogram[wl]++;
            wl = 0;
        }else{
            wl++;
        }
        
    }
    if(wl > 0){
       histogram[wl]++; 
    }

    for(i = 0; i < MAX_WORD_LENGTH; i++ ){
        printf("\n%2d: ", i);
        print_histogram(histogram[i]);
    }
    printf("\n");

    return 0;
}

void print_histogram(int count){
    int i;
    for(i = 0; i < count; i++){
        printf("=");
    }
}