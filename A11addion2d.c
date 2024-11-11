#include<stdio.h>
int main(){
    int i,j,m,n,a1[10][10],a2[10][10];
    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);
    printf("\nEnter the first array elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        } 
    }
    printf("\nEnter the 2nd array elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a2[i][j]);
        }  
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a1[i][j] = a1[i][j] + a2[i][j];
        }
    }
    printf("\nThe array sum is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
