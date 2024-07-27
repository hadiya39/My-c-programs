//input matrix from the user and display it in matrix form
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("enter the number of rows and columns : ");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the matrix row by row: ");
    for(i=0;i<=m-1;i++)   // controls rows
    {
        for(j=0;j<=n-1;j++)   // controls columns
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;

}