#include<stdio.h>
int main(){
    int i,j,temp;
    int a[]={10,8,1,3,5,7,4,12,6,14};
    int n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        if(a[i]%2==0){
            a[i]='$';
        }

        printf(a[i]=='$'?"%c ":"%d ",a[i]);
        
    }
    return 0;
}