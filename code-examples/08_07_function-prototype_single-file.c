#include <stdio.h>

int add(int a, int b);    // function prototype

int main(){
    int result = add(10, 20);
    printf("Result: %d", result);
    return 0;
}

int add(int a, int b){    // function definition
    return a + b;
}
