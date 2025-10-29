#include <stdio.h>

int meaningOfLife(){
    return 42;
}

int main(){
    int meaning = meaningOfLife();
    printf("The meaning of life is %d\n", meaning);
    return 0;
}
