#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Hello World", rev[50];
    int len=strlen(str), j=0;
    for(int i=len-1;i>=0;i--){
        rev[j++]=str[i];
    }
    rev[j]='\0';
    printf("Reversed String: %s",rev);
    return 0;
}
