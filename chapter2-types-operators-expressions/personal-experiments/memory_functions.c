#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10];
    char str2[10];
    memset(str2, '$', 3);
    puts(str2); // Not surprisingly, memset does not properly terminate a string with \0.

    strcpy(str, "Hello!"); // Strcpy does.
    puts(str);
    
    memset(str, '#', 9);
    str[9] = '\0';
    puts(str);

    char c;
    int i;
    for(i=0; (c = str[i]) != '\0'; i++)
        putchar(c);

    return 0;
}