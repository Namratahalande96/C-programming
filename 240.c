#include <stdio.h>
#include <ctype.h>

int main(){
    char str[200];
    printf("Enter sentence: ");
    gets(str);
    int newWord=1;
    for(int i=0; str[i]; i++){
        if(isspace(str[i])) newWord=1;
        else if(newWord){ str[i]=toupper(str[i]); newWord=0; }
        else str[i]=tolower(str[i]);
    }
    printf("Title Case: %s\n",str);
    return 0;
}
