//input matrix from user and find sum of its diagonal elements
#include<stdio.h>
int main()
 { int a[10][10],i,j,m,n,sum=0;
    printf("enter the number of rows and columns :\n ");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the matrix row by row: \n");
    for(i=0;i<=m-1;i++)   // controls rows
    {
        for(j=0;j<=n-1;j++)   // controls columns
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            
        }

    }
        printf("%d",sum);
        return 0;
 }