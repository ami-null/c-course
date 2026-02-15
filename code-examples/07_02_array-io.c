#include <stdio.h>

int main() {
    int n, i;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];    // define an integer array of size n
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){    // printing the values
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}