#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, len = strlen(str);
    for(i = len - 1; i >= 0; i--)
        putchar(str[i]);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Reversed: ");
    reverse(str);
    return 0;
}
