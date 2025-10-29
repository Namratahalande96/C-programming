#include <stdio.h>
int sum(int n){ return n==0?0:n%10+sum(n/10); }
int main(){ printf("%d",sum(1234)); return 0; }
