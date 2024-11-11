#include<stdio.h>
int main(){
    int i,count = 0;
    int a[] = {2,3,4,5,6,1,0,0,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(a[i]==0){
            int temp = a[count];
            a[count] = a[i];
            a[i] = temp;
            count++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}