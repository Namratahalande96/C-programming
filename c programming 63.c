#include <stdio.h>
int main() {
    char str[]="HeLLo WorLD";
    int upper=0, lower=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z') upper++;
        else if(str[i]>='a'&&str[i]<='z') lower++;
    }
    printf("Upper=%d, Lower=%d",upper,lower);
    return 0;
}
