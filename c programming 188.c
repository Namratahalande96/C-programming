#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *f = fopen("test.txt", "r");
    if (!f) { printf("File not found.\n"); return 1; }
    int ch, chars=0, words=0, lines=0, inWord=0;
    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch=='\n') lines++;
        if (isspace(ch)) inWord=0;
        else if (!inWord) { words++; inWord=1; }
    }
    fclose(f);
    printf("Characters=%d Words=%d Lines=%d\n", chars, words, lines);
    return 0;
}
