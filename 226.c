#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][20];
    printf("Enter 5 strings:\n");
    for(int i=0;i<5;i++) gets(arr[i]);
    char min[20]; strcpy(min, arr[0]);
    for(int i=1;i<5;i++)
        if(strcmp(arr[i],min)<0)
            strcpy(min,arr[i]);
    printf("Smallest string: %s\n", min);
    return 0;
}
