#include <stdio.h>
int main(){
    int a[5]={5,2,4,1,3},n=5;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
