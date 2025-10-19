#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);
    if((age >= 13) && (age <= 19)){
        printf("The user is a teenager");
    } else{
        printf("The user is not a teenager");
    }
}
