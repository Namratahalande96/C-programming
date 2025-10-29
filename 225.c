#include <stdio.h>

int main() {
    char str[200], ch; int count=0;
    printf("Enter string: ");
    gets(str);
    printf("Enter char to count: ");
    scanf("%c", &ch);
    for(int i=0; str[i]; i++)
        if(str[i]==ch) count++;
    printf("'%c' occurs %d times\n", ch, count);
    return 0;
}
