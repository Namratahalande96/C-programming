#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strcmp(s1, s2) > 0)
        printf("%s is greater.\n", s1);
    else
        printf("%s is greater.\n", s2);
    return 0;
}
