#include <stdio.h>

int getSquare(int n) {
    return n*n;
}

int main() {
    printf("The square of 5 is %d", getSquare(5));
    return 0;
}
