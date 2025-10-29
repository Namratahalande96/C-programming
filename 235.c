#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[200];
    printf("Enter sentence: ");
    gets(str);
    int count=0; char *token=strtok(str," ");
    while(token){
        char ch=tolower(token[0]);
        if(strchr("aeiou",ch)) count++;
        token=strtok(NULL," ");
    }
    printf("Words starting with vowel=%d\n",count);
    return 0;
}
