#include <stdio.h>

int main() {
    FILE *f = fopen("test.txt", "r");
    if (!f) { printf("File not found!"); return 1; }
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fclose(f);
    printf("File size = %ld bytes", size);
    return 0;
}
