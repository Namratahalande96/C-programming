#include <stdio.h>
#include <string.h>
int main() {
    char str[]="C language is powerful";
    char word[20], maxWord[20];
    int i=0,j=0,maxLen=0;
    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i]!='\0') word[j++]=str[i];
        else { word[j]='\0'; if(strlen(word)>maxLen){ maxLen=strlen(word); strcpy(maxWord,word);} j=0; }
        i++;
    }
    printf("Largest Word: %s",maxWord);
    return 0;
}
