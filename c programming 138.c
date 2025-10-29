#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s)-1;
    int pal=1;
    for(int i=0;i<l/2;i++)
      if(s[i]!=s[l-1-i]) pal=0;
    printf(pal?"Palindrome":"Not Palindrome");
}
