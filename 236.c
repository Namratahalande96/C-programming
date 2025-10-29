#include <stdio.h>
#include <string.h>

int main(){
    char str[200], word[50], rep[50];
    printf("Enter sentence: ");
    gets(str);
    printf("Word to replace: ");
    gets(word);
    printf("New word: ");
    gets(rep);
    char *pos=strstr(str,word);
    if(pos){
        char temp[200];
        strcpy(temp,pos+strlen(word));
        *pos='\0';
        strcat(str,rep);
        strcat(str,temp);
    }
    printf("Updated: %s\n",str);
    return 0;
}
