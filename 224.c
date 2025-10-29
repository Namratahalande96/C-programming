#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int ch;
    printf("Enter first string: "); gets(s1);
    printf("Enter second string: "); gets(s2);
    printf("1.Length\n2.Compare\n3.Concat\n4.Copy\n");
    scanf("%d",&ch); getchar(); // clear newline

    switch(ch){
        case 1: printf("Length of s1=%d s2=%d\n",(int)strlen(s1),(int)strlen(s2)); break;
        case 2: printf(strcmp(s1,s2)==0?"Equal\n":"Not equal\n"); break;
        case 3: strcat(s1,s2); printf("After concat: %s\n",s1); break;
        case 4: strcpy(s1,s2); printf("Copied: %s\n",s1); break;
        default: printf("Invalid!\n");
    }
    return 0;
}
