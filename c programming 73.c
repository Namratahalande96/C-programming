#include <stdio.h>
#include <string.h>
int main() {
    char str[]="I love coding in C";
    char word[20], minWord[20];
    int i=0,j=0,minLen=999;
    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i]!='\0') word[j++]=str[i];
        else { word[j]='\0'; if(strlen(word)<minLen){ minLen=strlen(word); strcpy(minWord,word);} j=0; }
        i++;
    }
    printf("Smallest Word: %s",minWord);
    return 0;
}
