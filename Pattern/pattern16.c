#include<stdio.h>
void main()
{
    int i,j,n,p=1;
    printf("Enter The No Of Rows");
    scanf("%d",&n);
    for ( i =1; i <=n ; i++)
    {   
        p=1;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",p++);
        for(j=1;j<i;j++)
        printf("%d",p++);
        printf("\n");
    }
}
    
