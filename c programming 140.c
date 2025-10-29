#include <stdio.h>
int main(){
    FILE *f=fopen("test.txt","a");
    if(!f){ printf("Error!"); return 1; }
    fprintf(f,"Appended Line.\n");
    fclose(f);
    printf("Data appended!");
    return 0;
}
