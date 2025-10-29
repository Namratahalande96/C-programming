#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    gets(s);
    int len = strlen(s);
    int flag = 1;
    for (int i = 0; i < len/2; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    printf(flag ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
