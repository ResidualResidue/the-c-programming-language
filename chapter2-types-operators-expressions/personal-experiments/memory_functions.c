#include <stdio.h>
#include <string.h>

typedef struct {
    int a;
    char b[50];
} my_struct;

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


    my_struct a, b;

    a.a=10;
    strcpy(a.b, "Structs");
    putchar('\n');

    printf("Struct a: a=%d, b=%s\n", a.a, a.b);

    memcpy(&b, &a, sizeof(my_struct));
    printf("Struct b: a=%d, b=%s\n", b.a, b.b);

    my_struct d = {100, "BAHH"}; // Alternative initialization syntax

    printf("Struct d: a=%d, b=%s\n", d.a, d.b);

    my_struct e = { // Yet another alternative initialization syntax.
        .b = "Okane kasegu",
        .a = 1000000
    };
    d = e; // Struct assignment is inituitive; Basically a memcpy under the hood.
    printf("Struct d: a=%d, b=%s\n", d.a, d.b);


    printf("Struct e: a=%d, b=%s\n", e.a, e.b);

    return 0;
}