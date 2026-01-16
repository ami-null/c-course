#include <stdio.h>

int main(){
    int a, b;
    printf("Enter first integer:\n");  // \n: newline
    scanf("%d", &a);

    printf("Enter second integer:\n");
    scanf("%d", &b);

    int c = a + b;
    printf("The sum is: %d", c);
}
