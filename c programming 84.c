#include <stdio.h>
#include <string.h>
int main() {
    char a[20]="Hello", b[20]="World";
    strcat(a,b);
    strcpy(b,a);
    b[strlen(b)-strlen("World")]='\0';
    memmove(a,a+strlen(b),strlen("World")+1);
    printf("a=%s, b=%s",a,b);
    return 0;
}
