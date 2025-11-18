#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int count = 0;
    for(int i = 0; i < strlen(s); i++){
        char ch = tolower((unsigned char)s[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    printf("Vowels = %d", count);
    return 0;
}