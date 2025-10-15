#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a line: ");
    fgets(s, sizeof(s), stdin);
	
    // remove trailing newline
    // search for "\n" and replace with "\0"
    s[strcspn(s, "\n")] = "\0";
    printf("You wrote: \%s\n", s);
    return 0;
}
