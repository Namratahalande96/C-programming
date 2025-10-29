#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letters=0, digits=0, spaces=0;
    printf("Enter string: ");
    gets(str);
    for(int i = 0; str[i]; i++) {
        if(isalpha(str[i])) letters++;
        else if(isdigit(str[i])) digits++;
        else if(isspace(str[i])) spaces++;
    }
    printf("Letters=%d Digits=%d Spaces=%d\n", letters, digits, spaces);
    return 0;
}
