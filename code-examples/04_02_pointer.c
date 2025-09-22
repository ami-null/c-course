#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;    // p points to x

    printf("%x", p);    // prints the hex address of x
    printf("\n%d", *p);    // prints 10
}
