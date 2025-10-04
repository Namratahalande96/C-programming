#include <stdio.h>
#include <string.h>
int main() {
    char str1[]="listen", str2[]="silent";
    int count[256]={0},i;
    for(i=0;str1[i];i++) count[str1[i]]++;
    for(i=0;str2[i];i++) count[str2[i]]--;
    for(i=0;i<256;i++) if(count[i]!=0){ printf("Not Anagram"); return 0; }
    printf("Anagram");
    return 0;
}
