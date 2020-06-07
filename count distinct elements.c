#include <stdio.h>
int main (void)
{
    int a[50], count=0, flag, n, p;
    printf("Enter size : \n");
    scanf("%d", &n);
    printf( "Enter the array: \n");
    for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
    for (int i=0; i<n; i++)
    {
        p=a[i];
        flag=0;
        for (int j=0; j<n; j++)
        {
            if (j!=i)
            {
                if (p==a[j])
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag==0)
        count++;
    }
    printf("No. of distinct elements: %d ", count);
    return 0;
}
