#include <stdio.h>

int main(){
    int x, *p = &x;
    
    printf("Address of x = %d\n", p);
    printf("Size of a single integer = %d\n", sizeof(x));
    printf("Adress after adding 1 = %d\n", p+1);
    printf("Adress after adding 2 = %d\n", p+2);
}
