#include <stdio.h>
struct Student {int id; char name[20];};
int main() {
    struct Student s[2]={{1,"Amit"},{2,"Rahul"}};
    for(int i=0;i<2;i++) printf("%d %s\n",s[i].id,s[i].name);
    return 0;
}
