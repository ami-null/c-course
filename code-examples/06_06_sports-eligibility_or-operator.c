#include <stdio.h>

int main(){
    int age, weight;
    scanf("%d %d", &age, &weight);
    
    if((age >= 16) || (weight >= 60)){
        printf("Eligible");
    } else{
        printf("Not eligible");
    }
}
