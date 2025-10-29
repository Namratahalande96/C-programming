#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("test.txt", "r");
    if (!f) { printf("File not found!"); return 1; }
    int ch, wc = 0, lc = 0, cc = 0, inword = 0;
    while ((ch = fgetc(f)) != EOF) {
        cc++;
        if (ch == '\n') lc++;
        if (isspace(ch)) inword = 0;
        else if (!inword) { inword = 1; wc++; }
    }
    fclose(f);
    printf("Chars=%d Words=%d Lines=%d\n", cc, wc, lc + 1);
    return 0;
}
