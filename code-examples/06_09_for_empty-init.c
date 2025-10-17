#include <stdio.h>

int main(){
    int i = 1;
    for(;;){
        if(i>5){
            break;
        }
        printf("%d\n", i);
        i++;
    }
}
