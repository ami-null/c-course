#include <stdio.h>

void increment(int *p){
    *p = *p + 1;    // modify the original variable
}

int main(){
    int x = 10;
    increment(&x);

    printf("x = %d\n", x);    // 11
    return 0;
}
