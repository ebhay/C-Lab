#include<stdio.h>
void main()
{
    int i,j,n,p=1;
    printf("Enter The No Of Rows");
    scanf("%d",&n);
    for ( i =1; i <=n ; i++)
    {   
        for(j=1; j<=i ; j++){
        if((i+j)%2==0)
        printf("%d ",1);
        else
        printf("%d ",0);
        }
        printf("\n");
    }
    
}