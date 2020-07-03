#include <stdio.h>
#include <stdlib.h>
int fibr(int);
int main()
{
    int n, t;
    printf("Enter position of terms: ");
    scanf ("%d", &n);
    for (int i=0; i<=n; i++)
    {
        t=fibr(i) ;
        printf("%d\t", t);
    }
    return 0;
}

int fibr(int num)
{
    if(num<=1)
    return num;
    return fibr(num-2)+fibr(num-1);
}
