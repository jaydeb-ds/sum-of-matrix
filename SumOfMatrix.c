#include<stdio.h>
#include<stdlib.h>

#define p 10
int main()
{
    int a[p][p],b[p][p],n,m;

    printf("Enter the range of matrix\n");
    scanf("%d %d",&n,&m);
    if (n!=m)
    {
        printf("methematical error ");
        exit(0);
    }
    
    printf("enter the element of matrix A \n ");
    for (int  i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            printf("\ta[%d][%d]\t",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("the matrix A is \n");
    for (int i=1;i<=n; i++)
    {
        for (int j=1; j<=m;j++)
        {
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element of matrix B \n");
    for (int i = 1; i <=n; i++)
    {
        for (int  j = 1; j<=m; j++)
        {
            printf("\tb[%d][%d]\t",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("The matrix B is \n");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=m; j++)
        {
            printf("\t%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the matrix is \n");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=m; j++)
        {
            printf("\t%d\t",(a[i][j])+(b[i][j]));
        }
        printf("\n");
    }
    
    return 0;
}