#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Ravi", "Amit", "John", "Sara", "Mina"};
    char search[20];
    int found = 0;

    printf("Enter name to search: ");
    gets(search);

    for(int i = 0; i < 5; i++)
        if(strcmp(names[i], search) == 0)
            found = 1;

    if(found) printf("Found!\n");
    else printf("Not found!\n");

    return 0;
}
