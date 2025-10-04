#include <stdio.h>
#include <string.h>
int main() {
    char str[]="I love coding", word[20];
    int i=strlen(str)-1,j,k;
    while(i>=0){
        while(i>=0 && str[i]==' ') i--;
        k=i;
        while(i>=0 && str[i]!=' ') i--;
        for(j=i+1;j<=k;j++) printf("%c",str[j]);
        printf(" ");
    }
    return 0;
}
