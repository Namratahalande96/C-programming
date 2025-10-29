  #include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL) {
        printf("No input.\n");
        return 1;
    }

    /* remove trailing newline from fgets */
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    for (char *p = str; *p != '\0'; p++) {
        if (strchr("AEIOUaeiou", *p) != NULL) {
            count++;
        }
    }

    printf("Vowels = %d\n", count);
    return 0;
}

