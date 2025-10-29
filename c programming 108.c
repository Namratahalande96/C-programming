#include <stdio.h>
int power(int a,int b){ return b==0?1:a*power(a,b-1); }
int main(){ printf("%d",power(2,5)); return 0; }
