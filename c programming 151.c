#include <stdio.h>

struct student {
    int id;
    char name[30];
    float marks;
};

int main() {
    struct student s = {1, "Rahul", 88.5}, r;
    FILE *f = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);

    f = fopen("student.dat", "rb");
    fread(&r, sizeof(r), 1, f);
    fclose(f);

    printf("ID=%d Name=%s Marks=%.2f\n", r.id, r.name, r.marks);
    return 0;
}
