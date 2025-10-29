#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    printf("Enter a sentence: ");
    gets(s);
    int count = 0;
    for (int i = 0; s[i]; i++) {
        if ((s[i] != ' ' && s[i] != '\n' && s[i] != '\t') &&
            (s[i+1] == ' ' || s[i+1] == '\0'))
            count++;
    }
    printf("Word count = %d\n", count);
    return 0;
}
