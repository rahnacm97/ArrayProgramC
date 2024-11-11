#include<stdio.h>
int main(){
    int i,n,Marks[100],sum=0,avg;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&Marks[i]);
    }
    printf("The array elements:");
    for(i=0;i<n;i++){
        printf("%d ",Marks[i]);
    }
    for(i=0;i<n;i++){
        sum = sum + Marks[i];
    }
    avg = sum/n;
    printf("\nThe array elements sum is: %d",sum);
    printf("\nThe array elements avg is: %d",avg);

    return 0;
}