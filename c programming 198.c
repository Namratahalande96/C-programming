#include <stdio.h>
int main() {
    FILE *f1=fopen("file1.txt","r");
    FILE *f2=fopen("file2.txt","r");
    FILE *f3=fopen("merged.txt","w");
    if(!f1||!f2||!f3){printf("Error opening file.");return 1;}
    char ch;
    while((ch=fgetc(f1))!=EOF) fputc(ch,f3);
    while((ch=fgetc(f2))!=EOF) fputc(ch,f3);
    fclose(f1); fclose(f2); fclose(f3);
    printf("Files merged into merged.txt");
    return 0;
}
