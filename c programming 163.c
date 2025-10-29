#include <stdio.h>
int main() {
    FILE *src = fopen("source.txt","r");
    FILE *dest = fopen("copy.txt","w");
    if(!src || !dest){ printf("Error!"); return 1; }
    int ch;
    while((ch=fgetc(src))!=EOF) fputc(ch,dest);
    fclose(src); fclose(dest);
    printf("File copied successfully!");
}
