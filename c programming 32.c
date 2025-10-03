#include <stdio.h>
#include <string.h>
int main() {
    char s1[20]="Hello", s2[]="World";
    strcat(s1,s2);
    printf("Concatenated=%s",s1);
    return 0;
}
