#include <stdio.h>
#include <string.h>

int main() {
    char s[100], ch;
    int count = 0;
    printf("Enter string: ");
    gets(s);
    printf("Enter character: ");
    scanf("%c", &ch);

    for (int i = 0; s[i]; i++)
        if (s[i] == ch) count++;

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
