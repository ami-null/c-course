#include <stdio.h>

int main(){
    int a, b, gcd;
    scanf("%d %d", &a, &b);
    
    if(a < b){
        gcd = a;
    } else{
        gcd = b;
    }
    
    while((a%gcd!=0) || (b%gcd!=0)){
        gcd--;
    }
    
    printf("%d", gcd);
}
