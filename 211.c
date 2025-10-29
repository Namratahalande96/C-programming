#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for(int i = 0; i < 256; i++)
        if(freq[i] > 0)
            printf("%c = %d\n", i, freq[i]);

    return 0;
}
