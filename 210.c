#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int words = 0, inWord = 0;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i]; i++) {
        if(isspace(str[i]))
            inWord = 0;
        else if(!inWord) {
            inWord = 1;
            words++;
        }
    }
    printf("Total words: %d\n", words);
    return 0;
}
