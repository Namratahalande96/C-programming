#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; fgets(s,100,stdin);
    int len=strlen(s)-1;
    for(int i=len-1;i>=0;i--) putchar(s[i]);
}
