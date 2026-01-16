#include <stdio.h>

int main(){
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("Cannot open file.\n");
        return 1;
    }
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fp) != NULL){
        printf("%s", buffer);
    }
    fclose(fp);
}