#include <stdio.h>

int main(){
    int i = 1;
    for(;;){
        if(i>5){
            break;    // exits the loop when i>5
        }
        printf("%d\n", i);
        i++;
    }
}
