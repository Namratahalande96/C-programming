#include <stdio.h>

int main(){
    int a[3][3], min;
    printf("Enter 3x3 matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) scanf("%d",&a[i][j]);
    min=a[0][0];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j]<min) min=a[i][j];
    printf("Minimum=%d\n",min);
    return 0;
}
