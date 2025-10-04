#include <stdio.h>
#include <string.h>
void reverse(char str[],int i,int j){
    if(i<j){
        char t=str[i]; str[i]=str[j]; str[j]=t;
        reverse(str,i+1,j-1);
    }
}
int main() {
    char str[]="Rushikesh";
    reverse(str,0,strlen(str)-1);
    printf("Reversed=%s",str);
    return 0;
}
