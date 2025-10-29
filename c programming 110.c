#include <stdio.h>
int search(int a[],int low,int high,int key){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(a[mid]==key) return mid;
    else if(a[mid]>key) return search(a,low,mid-1,key);
    else return search(a,mid+1,high,key);
}
int main(){
    int a[]={1,3,5,7,9},key=7;
    int pos=search(a,0,4,key);
    printf(pos!=-1?"Found":"Not Found");
}
