#include <stdio.h>

void copyStr(char *src, char *dest) {
    while(*src) *dest++ = *src++;
    *dest = '\0';
}

int main() {
    char s1[100], s2[100];
    printf("Enter string: ");
    gets(s1);
    copyStr(s1, s2);
    printf("Copied: %s\n", s2);
    return 0;
}
