#include <stdio.h>
void main()
{
    int a[100],b[100];
    int n,m;
    printf("\n Enter the Size of the two arrays");
    scanf("%d %d",&n,&m);
    for (int i = n-1; i>=0; i--)
    {   
        printf("\n Enter The Array 1 Elements");
        scanf("%d",&a[i]);
    }
    for (int i = m-1; i>=0; i--)
    {
        printf("\n Enter The Array 2 Elements");
        scanf("%d",&b[i]);
    }
    printf("\n The Array 1 Reversed Elements");
    for (int i = 0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n The Array 2 Reversed Elements");
    for (int i = 0; i<m ; i++)
    {
        printf("%d \t",b[i]);
    }
    int nf=n+m;
    int sum[100];
    int j=0;
    for(int i=0;i<nf;i++)
    {
        if(n>0){
        sum[i]=a[i];
        --n;
        }
        else{
            sum[i]=b[j];
            if(j<m)
            ++j;
        }
    }
    printf("\n Resultant Array");
    for (int i = 0; i<nf ; i++)
    {
        printf("%d \t",sum[i]);
    }
    
}