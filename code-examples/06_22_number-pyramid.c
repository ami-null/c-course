#include <stdio.h>

int main(){
    int n_rows = 5;
    for(int i = 1; i <= n_rows; i++){
        for(int j = i; j < n_rows; j++){
            printf(" ");   // initial spaces of each row
        }
        for(int k = 1; k <= i; k++){
            printf("%d ", k);    // numbers of each row
        }
        printf("\n"); // newline after printing each row
    }
    return 0;
}
