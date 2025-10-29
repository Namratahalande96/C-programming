#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; int freq[256]={0};
    fgets(s,100,stdin);
    for(int i=0;s[i];i++) freq[(unsigned char)s[i]]++;
    for(int i=0;i<256;i++)
        if(freq[i]>0) printf("%c = %d\n",i,freq[i]);
}

