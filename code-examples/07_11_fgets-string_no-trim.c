#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a line: ");
	
    fgets(s, sizeof(s), stdin);

    printf("You wrote: \%s", s);
}
