#include <stdio.h>
/*
    1.19 Character arrays
    Read a file and print its longest line
*/
int get_line(char* current_line, int limit);
void copy_line(char* longest_line, char* current_line);


#define MAX_LENGTH 1024
int main(){

    int longest_length,len;
    longest_length = len = 0;
    char current_line[MAX_LENGTH];
    char longest_line[MAX_LENGTH];

    while((len = get_line(current_line, MAX_LENGTH)) > 0){
        if(len > longest_length){
            longest_length = len;
            copy_line(longest_line, current_line);
        }
    }

    printf("%s\n", longest_line);

    return 0;    
}

int get_line(char* current_line, int limit){
    int i, c, length;
    length=0;
    for(i=0; i<limit-1 && (c=getchar()) != EOF && c != '\n'; i++)
        current_line[i] = c;
    
    if(c == '\n'){
        current_line[i] = '\n';
        i++;
    }
    current_line[i]='\0'; // Null character, equal to 0. Marks end of string. All strings must take into account the 1 extra null character.
    return i;

}

void copy_line(char* longest_line, char* current_line){
    int i;
    i = 0;
    while((longest_line[i] = current_line[i]) != '\0'){
        i++;
    }

}