#include <stdio.h>
int main() {
    char str[]="Hello123@!";
    int digits=0, alph=0, special=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='0'&&str[i]<='9')) digits++;
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) alph++;
        else special++;
    }
    printf("Alphabets=%d Digits=%d Special=%d",alph,digits,special);
    return 0;
}
