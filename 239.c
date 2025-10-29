#include <stdio.h>
#include <string.h>

int main(){
    char text[200], words[50][20];
    int count[50]={0}, n=0;
    printf("Enter sentence: ");
    gets(text);
    char *token=strtok(text," ");
    while(token){
        int found=0;
        for(int i=0;i<n;i++){
            if(strcmp(words[i],token)==0){count[i]++; found=1;}
        }
        if(!found){strcpy(words[n],token); count[n]++; n++;}
        token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++)
        printf("%s = %d\n", words[i], count[i]);
    return 0;
}
