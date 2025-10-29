#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    strcat(a, b);
    printf("After concatenation: %s\n", a);
    return 0;
}
