#include <stdio.h>

/*
    Revise the main routine of the longest line program so it will correctly print the length of arbitrary long input lines, 
    and as much as possible of text.
*/

#define LIMIT 10

int get_line(char* line, int limit);
void copy(char* to, char* from);

int main(){
    int len;
    char current_line[LIMIT];
    while((len = get_line(current_line, LIMIT)) > 0){
        printf("Length of line: %d\n%s\n", len, current_line);
    }

    return 0;
}

int get_line(char* line, int limit){
    int c;
    long i;

    for(i=0; (c = getchar()) != '\n' && c != EOF; i++){
        if(i < limit-1)
            line[i] = c;
    }
    
    if(i < limit-1){
        if(c == '\n'){
            line[i] = c;
            i++;
        }
        line[i] = '\0';
    }else{
        line[limit-1] = '\0';
    }

    return i;

}