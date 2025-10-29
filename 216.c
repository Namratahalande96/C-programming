#include <stdio.h>

int main() {
    int ch;
    printf("Menu:\n1.Add\n2.Sub\n3.Mul\n4.Div\n");
    scanf("%d", &ch);
    switch(ch) {
        case 1: printf("Addition\n"); break;
        case 2: printf("Subtraction\n"); break;
        case 3: printf("Multiplication\n"); break;
        case 4: printf("Division\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
