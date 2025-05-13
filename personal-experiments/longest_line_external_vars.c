#include <stdio.h>

/*
    Some notes on extern.

    If definition of the external variable occurs in the source file before any function, can omit extern.

    If a variable is defined in file1 and used in files 2 and 3, then extern declarations are needed.

    Usual practice is to collect extern declarations of vars and funcs in a header (.h) file that is used by #include.

    Not a great idea to abuse, or sometimes use extern at all. Makes data connections less obvious and functions lose generality.


*/

int get_line();
void copy_current_to_longest();


// Rewrite earlier longest line program using extern variables.

#define LIMIT 1024
char line[LIMIT];
char longest_line[LIMIT];

int main(){
    int length, longest;
    extern char longest_line[];
    longest = 0;

    while((length = get_line()) != 0){
        if(length > longest){
            longest = length;
            copy_current_to_longest();
        }
    }

    printf("%d\n", longest);
    printf("%s\n", longest_line);

    
}

int get_line(){
    int c, i;
    extern char line[];
    for(i=0; i < LIMIT - 1 && ((c=getchar()) != EOF && c != '\n'); i++){
        line[i] = c;
    }
    if(c == '\n'){
        line[i]=c;
        i++;
    }
    line[i]='\0';

    return i;
}

void copy_current_to_longest(){
    extern char line[], longest_line[];
    int c, i;

    for(i=0; (longest_line[i] = line[i]) != '\0'; i++)
        ;
    
}