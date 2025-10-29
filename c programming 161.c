#include <stdio.h>
struct student { int id; char name[20]; };
int main() {
    struct student s = {101, "Amit"};
    struct student *p = &s;
    printf("ID=%d Name=%s", p->id, p->name);
}
