#include <stdio.h>

int square(int n){
    return n * n;
}

void showSquare(int x){
    printf("Square of %d is %d\n", x, square(x));
}

int main(){
    showSquare(7);
    return 0;
}
