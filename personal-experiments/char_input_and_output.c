#include <stdio.h>
void intro_to_put_and_get_char();
void file_copying();

/*
    DEFINITION: text stream: Sequence of characters divider into lines; Each line being 0 or more characters followed by a new line character.
    Standard library provides several funcs.
        getchar() # Reads the next input character from a text stream and returns value. Usually comes from keyboard.
        putchar()

    being the simplest.
*/

int main(){

    int do_intro = 0;
    if(do_intro){
        //1.5 intro: Character Input and Output
        intro_to_put_and_get_char();
    }

    //1.5.1 File Copying
    file_copying();


    return 0;
}
    
/*
1.5 intro: Character Input and Output
*/
void intro_to_put_and_get_char(){
    // Intro to putchar and getchar

    char c = getchar(); 
    printf("%c\n", c);
    putchar(c);
}

    
/*
1.5.1 File Copying
*/
void file_copying(){
    int c; // Any int can be used to store char data. We use INT here instead of char to handle EOF.

    printf("EOF: %d\n", EOF); // What number is EOF? 
    // EOF is a macro which expands to an integer constant expression with type int and an implementation dependent negative value but is very commonly -1.

    /*
        2 interesting points:
            1. c = getchar() is an expression and has value -- value on lefthand side of assignment. We can use that in comparison
            2. != has higher precedence than =, so we need to wrap = in parens.
                Basically, |c = getchar() != EOF| === |c = (getchar() != EOF)|
    */
    while((c = getchar()) != EOF) 
        putchar(c);
        
    
    putchar(c); // Get a invalid value in terminal.
}
