#include <stdio.h>
#include <string.h>    // for strlen()
#include <ctype.h>    // for toupper(), tolower()

int main(){
    char s[] = "Hello World!";
    for(int i = 0; i < strlen(s); i++){
        s[i] = toupper((unsigned char)s[i]);
    }
    printf("%s", s);    // HELLO WORLD!
}