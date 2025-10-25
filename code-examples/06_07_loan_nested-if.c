#include <stdio.h>
int main(){
    int age, income;
    scanf("%d %d", &age, &income);
    
    if(age >= 18){
        if(income >= 20000){
            printf("Eligible for loan");
        } else{
            printf("Not eligible: income too low");
        }
    } else{
        printf("Not eligible: under 18");
    }
}
