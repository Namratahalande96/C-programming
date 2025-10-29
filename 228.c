#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while(start<end){
        char t=*start; *start++=*end; *end--=t;
    }
}

int main() {
    char str[200];
    printf("Enter sentence: ");
    gets(str);
    char *wordStart=NULL;
    for(int i=0; ; i++){
        if(!wordStart && str[i]!=' ' && str[i]!='\0')
            wordStart=&str[i];
        if((wordStart && (str[i]==' '||str[i]=='\0'))){
            reverseWord(wordStart,&str[i-1]);
            wordStart=NULL;
        }
        if(str[i]=='\0') break;
    }
    printf("Reversed words: %s\n",str);
    return 0;
}
