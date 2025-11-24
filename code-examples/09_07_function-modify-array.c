#include <stdio.h>

void doubleValues(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int a[4] = {1, 2, 3, 4};
    doubleValues(a, 4);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);   // 2 4 6 8
    }
}
