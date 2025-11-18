#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[] = " World";
    strcat(a, b);
    printf("\%s", a); // prints "Hello World"
    return 0;
}