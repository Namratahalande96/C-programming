#include <stdio.h>
#include <ctype.h>

int stricmp(const char *a, const char *b) {
    while(*a && *b) {
        char ca = tolower(*a), cb = tolower(*b);
        if(ca != cb) return ca - cb;
        a++; b++;
    }
    return *a - *b;
}

int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    if(stricmp(s1, s2) == 0) printf("Equal (ignore case)\n");
    else printf("Not equal\n");
    return 0;
}
