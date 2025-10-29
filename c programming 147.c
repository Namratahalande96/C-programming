#include <stdio.h>
int main(){
    int a[10][10],n,sum1=0,sum2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++){
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    printf("Main=%d Secondary=%d",sum1,sum2);
}
