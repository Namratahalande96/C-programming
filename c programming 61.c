#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Hello World Program";
    int count=1;
    for(int i=0;str[i]!='\0';i++) if(str[i]==' ') count++;
    printf("Words=%d",count);
    return 0;
}
