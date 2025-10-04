#include <stdio.h>
int main() {
    char str[]="C Programming is fun", result[50];
    int j=0;
    for(int i=0;str[i]!='\0';i++) if(str[i]!=' ') result[j++]=str[i];
    result[j]='\0';
    printf("Without spaces: %s",result);
    return 0;
}
