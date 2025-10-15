#include <stdio.h>

int main() {
    int r = 2, c = 3, i, j, mat[2][3];
	
    printf("Please input a 2 by 3 matrix:\n");
	
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
	
    printf("\nYou entered:\n");
	
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
