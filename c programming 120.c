#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *f1=fopen("input.txt","r"),*f2=fopen("output.txt","w");
    char ch;
    while((ch=fgetc(f1))!=EOF)
        if(isalpha(ch)) fputc(ch,f2);
    fclose(f1); fclose(f2);
    printf("Copied alphabets only.");
}
