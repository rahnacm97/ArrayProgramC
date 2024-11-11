#include<stdio.h>
int main(){
    int i,j,m,n,a[100][100];
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
   printf("The array elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }  
        printf("\n");
    }
    printf("After transpose the array elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }  
        printf("\n");
    }
    
    return 0;
}