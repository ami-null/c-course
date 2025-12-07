#include <stdio.h>

int main(){
    FILE *fp = fopen("data.txt", "w");
    if(fp == NULL){
        printf("Cannot open file.\n");
        return 1;
    }
    fputs("Hellow, world!\n", fp);
    fprintf(fp, "This is an integer: %d\n", 10);
    fputc('X', fp);    // single character

    fclose(fp);
    return 0;
}