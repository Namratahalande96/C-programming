#include <stdio.h>
#include <string.h>
int isPal(char str[], int s, int e) {
    if (s >= e) return 1;
    if (str[s] != str[e]) return 0;
    return isPal(str, s + 1, e - 1);
}
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    if (isPal(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
