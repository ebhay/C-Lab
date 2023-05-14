#include <stdio.h>
void main()
{
    int a[100][100];
    int n,i,j,ch;
    printf("Enter The Size Of Square Matrix");
    scanf("%d",&n);
    printf("\nEnter The Elements Square Matrix n x n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
    printf("\nEnter the Choice Of Arrgument");
    scanf("%d",ch);;
    switch (ch)
    {
    case 1:
        int sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                sum1+=a[i][j];
                else if(i==(n-j))
                sum2+=a[i][j];
            }
            printf("\n SUM OF DIAGONAL 1: %d",sum1);
            printf("\n SUM OF DIAGONAL 2: %d",sum2);
        }
        break;
    
    case 2:
        printf("\n FIRST DAIGONAL TRIANGLE");
        for(i=0;i<n;i++)
        {
            for (int j = 0; j<=i; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n SECOND DAIGONAL TRIANGLE");
        for(i=0;i<n;i++)
        {
            for (int j = 0; j>=i; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        break;
    default:
        printf("Wrong Arrgument");
        break;
    }
}