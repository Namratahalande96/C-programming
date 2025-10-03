#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Rushikesh", rev[20];
    int len=strlen(str);
    for(int i=0;i<len;i++) rev[i]=str[len-1-i];
    rev[len]='\0';
    printf("Reverse=%s",rev);
    return 0;
}
