#include <stdio.h>

int main(){
    int age, income;
    scanf("%d %d", &age, &income);
    
    if((age >= 18) && (income >= 20000)){
        printf("Eligible for loan");
    } else{
        printf("Ineligible for loan");
    }
}
