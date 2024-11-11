#include<stdio.h>
int main(){
    int a1[50],a2[50],a3[50];
    int i,j,s1,s2,s3;
    printf("Enter the first array size:");
    scanf("%d",&s1);
    printf("Enter the first array elements:");
    for(i=0;i<s1;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the 2nd array size:");
    scanf("%d",&s2);
    printf("Enter the second array elements:");
    for(i=0;i<s2;i++){
        scanf("%d",&a2[i]);
    }
    s3 = s1 + s2;
    for(i=0;i<s1;i++){
        a3[i] = a1[i];
    }
    for(j=0;j<s2;j++){
        a3[i] = a2[j];
        i++;
    }
    printf("\nThe 3rd array elements:");
    for(i=0;i<s3;i++){
        printf("%d ",a3[i]);
    }

    return 0;
}