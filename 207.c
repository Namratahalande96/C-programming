#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int v = 0, c = 0;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if(strchr("aeiou", ch))
            v++;
        else if(isalpha(ch))
            c++;
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
    return 0;
}
