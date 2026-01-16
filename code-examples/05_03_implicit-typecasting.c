#include <stdio.h>
int main() {
    int i = 10, j;
    float d, e = 5.25;

    // implicit typecasting (int -> float):
    d = i;
    printf("Value of i (int): %d\n", i);
    printf("Value of d (double): %f\n", d);

    // implicit typecasting (float -> int):
    j = e;
    printf("Value of j (int): %d", j);
}
