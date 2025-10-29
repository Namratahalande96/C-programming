#include <stdio.h>
#include <string.h>
void rev(char *s,int i){
    if(i<0) return;
    printf("%c",s[i]);
    rev(s,i-1);
}
int main(){
    char str[]="HELLO";
    rev(str,strlen(str)-1);
}
