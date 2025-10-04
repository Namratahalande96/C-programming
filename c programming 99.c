#include <stdio.h>
struct Student{ int id; char name[20]; float marks; };
int main() {
    struct Student s1={1,"Amit",85.5};
    printf("ID=%d Name=%s Marks=%.2f",s1.id,s1.name,s1.marks);
    return 0;
}
