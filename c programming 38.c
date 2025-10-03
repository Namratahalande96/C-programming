#include <stdio.h>
struct Student {
    int id;
    char name[20];
};
int main() {
    struct Student s={1,"rushikesh"};
    printf("ID=%d, Name=%s",s.id,s.name);
    return 0;
}

