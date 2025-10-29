#include <stdio.h>

int main(){
    int a[50],n,max1,max2;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    max1=max2=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max1){max2=max1;max1=a[i];}
        else if(a[i]>max2&&a[i]<max1) max2=a[i];
    }
    printf("Second largest=%d\n",max2);
    return 0;
}
