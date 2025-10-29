#include <stdio.h>
int main() {
    FILE *f = fopen("test.txt", "a");
    if (!f) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(f, "\nAppended text added successfully!");
    fclose(f);
    printf("Text appended to file.\n");
    return 0;
}
