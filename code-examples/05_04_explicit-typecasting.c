#include <stdio.h>

int main() {
    double d = 9.78;
    int i;

    // explicit typecasting (double -> int)
    i = (int)d;

    printf("Value of d (double): %lf\n", d);
    printf("Value of i (int after explicit cast): %d\n", i);

    return 0;
}
