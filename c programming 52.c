#include <stdio.h>
int main() {
    int arr[8]={1,2,2,3,4,4,4,5};
    int visited[8]={0};
    for(int i=0;i<8;i++){
        if(visited[i]) continue;
        int count=1;
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){ count++; visited[j]=1; }
        }
        printf("%d occurs %d times\n",arr[i],count);
    }
    return 0;
}
