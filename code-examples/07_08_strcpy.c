#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20];
    scanf("%s", a);
	
    // copying the contents of a into b:
    strcpy(b, a);    // 2nd argument is the source
    printf("%s", b);
}
