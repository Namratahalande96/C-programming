#include <stdio.h>
#include <string.h>
int main() {
    char a[]="abc", b[]="abc";
    if(strcmp(a,b)==0) printf("Equal");
    else printf("Not Equal");
    return 0;
}
