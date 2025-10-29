#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20];
    char temp[20];

    printf("Enter 5 names:\n");
    for(int i = 0; i < 5; i++)
        gets(names[i]);

    for(int i = 0; i < 5; i++)
        for(int j = i + 1; j < 5; j++)
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }

    printf("\nSorted names:\n");
    for(int i = 0; i < 5; i++)
        puts(names[i]);
    return 0;
}
