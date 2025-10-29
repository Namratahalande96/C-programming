#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100], s2[100];
    int freq[256]={0};
    printf("Enter first: "); gets(s1);
    printf("Enter second: "); gets(s2);
    for(int i=0;s1[i];i++) freq[tolower(s1[i])]++;
    for(int i=0;s2[i];i++) freq[tolower(s2[i])]--;
    for(int i=0;i<256;i++)
        if(freq[i]!=0){ printf("Not anagram\n"); return 0; }
    printf("Anagram!\n");
    return 0;
}
