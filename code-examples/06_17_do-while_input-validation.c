#include <stdio.h>

int main(){
    int input, pin = 12345;

    do{
        printf("Enter the pin: ");
        scanf("%d", &input);
    } while(input != pin);

    printf("Access granted!\n");
}
