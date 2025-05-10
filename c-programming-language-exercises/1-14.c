#include <stdio.h>

/* 
    Write a program to print the histogram of the frequencies of different characters in its input.
    We will assume hexidecimal input. Since this is a bit simpler than counting words we'll try to normalize the histogram a bit.
*/
#define GROUP_COUNT 16

int main(){
    
    int i, j, c, max_count, min_count;
    float histogram_groups[GROUP_COUNT];

    for(i=0; i < GROUP_COUNT; i++){
        histogram_groups[i] = 0.0000;
    }
    
    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9')
            histogram_groups[c - '0']++;
        else if(c >= 'a' && c <= 'f')
            histogram_groups[c - 'a' + 10]++;
        
    }
    max_count = min_count = histogram_groups[1];
    
    for(i=2; i < GROUP_COUNT; i++){
        if(histogram_groups[i] > max_count)
            max_count = histogram_groups[i];
        if(histogram_groups[i] < min_count)
            min_count = histogram_groups[i];
    }

    for(i=1; i < GROUP_COUNT; i++){
        histogram_groups[i] = ((histogram_groups[i] / max_count) * 20);
        printf("%d:\t", i);
        for(j=0; j < histogram_groups[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}