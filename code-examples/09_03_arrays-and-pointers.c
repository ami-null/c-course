#include <stdio.h>

int main(){
    int a[4] = {1,2,3,4}, *p = a;

    printf("%d\n", *p);    // prints 1
    printf("%d\n", *(p + 1));    // prints 2
    
    printf("%d\n", *a);    // prints 1
    printf("%d\n", *(a + 1));    // prints 2
}
