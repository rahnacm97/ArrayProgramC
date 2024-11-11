#include<stdio.h>
int main(){
    int i,j,m,n,a[100][100],sum = 0;
    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } 
    }
   
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

           sum = sum + a[i][j]; 
        }  
        
    }
    printf("sum is %d ",sum);
    return 0;
}