#include <stdio.h>
int main()
{
    int a[10][10],i,j,n,m,rmax=0,cmax=0;
    printf("enter the order of the matrix\n");
    scanf("%d%d\n",&m,&n);
    printf("enter the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>rmax)
            {
                rmax=a[i][j];
            }
        }
        printf("\n thr max element in row %d is %d",i+1,rmax);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[j][i]>cmax)
            {
                cmax=a[j][i];
            }
        }
        printf("\n the max element in column %d is %d",i+1,cmax);
    }
}