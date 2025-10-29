#include <stdio.h>
int rev(int n,int r){ return n==0?r:rev(n/10,r*10+n%10); }
int main(){ printf("%d",rev(1234,0)); return 0; }
