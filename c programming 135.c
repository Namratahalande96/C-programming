#include <stdio.h>
int main(){
    char src[100], dest[100];
    fgets(src,100,stdin);
    int i;
    for(i=0; src[i]!='\0'; i++) dest[i]=src[i];
    dest[i]='\0';
    printf("Copied: %s",dest);
    return 0;
}
