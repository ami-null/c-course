#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("Address of x = %d\n", p);
    printf("Value through pointer = %d\n", *p);

    return 0;
}
