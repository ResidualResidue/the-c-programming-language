#include <stdio.h>

/* 
    Write a function reverse(s) that reverses the character string s.
    Use it to write a program that reverses its input one line a time.
*/

#define LIMIT 1024

int str_len(char* string);
int get_line(char* line, int limit);
void reverse(char* string);

int main(){
    char stuff[LIMIT];
    while((get_line(stuff, LIMIT)) != 0){
        reverse(stuff);
        printf("%s", stuff);
    }
    return 0;
}

int str_len(char* string){
    int i;
    for(i=0; string[i] != '\0'; i++)
        ;
    return i;
}

int get_line(char* line, int limit){

    int c, i;

    for(i=0; i<limit-1 && (c = getchar()) != '\n' && c != EOF; i++ )
        line[i] = c;

    if(c == '\n'){
        line[i] = c;
        i++;
    }
    
    line[i] = '\0';

    return i;
}

void reverse(char* string){
    int i, j;
    i=0;
    j=str_len(string) - 1;
    if(string[j] == '\n')
        j--;

    while( i < j ){
        char tmp = string[i];
        string[i] = string[j];
        string[j] = tmp;
        i++;
        j--;
    }

}