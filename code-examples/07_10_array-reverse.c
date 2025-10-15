#include <stdio.h>

int main() {
    int n = 5, i;
    int a[] = {1,2,3,4,5};
    for(i = 0; i < n/2; i++){
        int tmp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tmp;
    }
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
