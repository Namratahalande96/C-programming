#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int up=0, low=0;
    printf("Enter string: ");
    gets(str);
    for(int i=0; str[i]; i++) {
        if(isupper(str[i])) up++;
        else if(islower(str[i])) low++;
    }
    printf("Uppercase=%d  Lowercase=%d\n", up, low);
    return 0;
}
