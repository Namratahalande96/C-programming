#include <stdio.h>
#include <string.h>
int main() {
    char str[100], *p1, *p2, temp;
    printf("Enter string: ");
    scanf("%s", str);
    p1 = str;
    p2 = str + strlen(str) - 1;
    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++; p2--;
    }
    printf("Reversed string: %s", str);
    return 0;
}
