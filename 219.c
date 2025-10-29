#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 10}, x, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &x);
    for(int i = 0; i < 5; i++)
        if(arr[i] == x)
            found = 1;
    if(found) printf("Found!\n");
    else printf("Not found!\n");
    return 0;
}
