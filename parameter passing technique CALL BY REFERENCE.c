#include<stdio.h>
void swapnum(int*i,int*j)
{
    int temp=*j;
    *i-*j;
    *j-temp;
}
int main(void)
{
    int a=15, b=30;
    swapnum(&a,&b);
    printf("a is %d and b is %d\n",a,b);
    return 0;
}
