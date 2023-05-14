#include<stdio.h>
void main()
{
    int i,j,n,p=1;
    printf("Enter The No Of Rows");
    scanf("%d",&n);
    for ( i =1; i <=n ; i++)
    {   
        for(j=1; j<=i ; j++){
        printf("%d ",(n+1-i));
        }
        printf("\n");
    }
    
}