#include <stdio.h>
struct student{
    int id; char name[30]; float marks;
};
int main(){
    struct student s[3];
    for(int i=0;i<3;i++){
        scanf("%d %s %f",&s[i].id,s[i].name,&s[i].marks);
    }
    printf("Details:\n");
    for(int i=0;i<3;i++)
        printf("%d %s %.2f\n",s[i].id,s[i].name,s[i].marks);
}
