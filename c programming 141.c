#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *f=fopen("test.txt","r");
    if(!f){ printf("File not found"); return 1; }
    int ch,words=0,inword=0;
    while((ch=fgetc(f))!=EOF){
        if(isspace(ch)) inword=0;
        else if(!inword){ inword=1; words++; }
    }
    fclose(f);
    printf("Words=%d",words);
}
