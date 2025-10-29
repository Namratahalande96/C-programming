#include <stdio.h>

int main() {
    char str[100], old, newc;
    printf("Enter string: ");
    gets(str);
    printf("Enter char to replace: ");
    scanf("%c", &old); getchar();
    printf("Enter new char: ");
    scanf("%c", &newc);
    for(int i=0; str[i]; i++)
        if(str[i]==old) str[i]=newc;
    printf("After replace: %s\n", str);
    return 0;
}
