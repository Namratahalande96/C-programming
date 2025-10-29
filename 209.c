#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int choice;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    printf("1.Compare  2.Concat  3.Copy\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(strcmp(s1, s2)==0) printf("Equal\n");
            else printf("Not equal\n");
            break;
        case 2:
            strcat(s1, s2);
            printf("Concatenated: %s\n", s1);
            break;
        case 3:
            strcpy(s1, s2);
            printf("Copied: %s\n", s1);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
