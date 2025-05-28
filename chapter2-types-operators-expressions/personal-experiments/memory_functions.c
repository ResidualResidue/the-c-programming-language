#include <stdio.h>
#include <string.h>

struct my_struct{
    int a;
    char b[10];
};

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


    struct my_struct a, b;

    a.a=10;
    strcpy(a.b, "Structs");
    putchar('\n');

    printf("Struct a: a=%d, b=%s\n", a.a, a.b);

    memcpy(&b, &a, sizeof(struct my_struct));
    printf("Struct b: a=%d, b=%s\n", b.a, b.b);


    return 0;
}