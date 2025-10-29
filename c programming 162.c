#include <stdio.h>
#include <string.h>
int main() {
    char a[30], b[30], temp[30];
    scanf("%s %s", a, b);
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    printf("After swap: %s %s", a, b);
}
