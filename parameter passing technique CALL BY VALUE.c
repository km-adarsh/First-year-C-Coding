#include<stdio.h>
void func(int a,int b)
{
    a+=b;
    printf("In function a=%d and b=%d\n", a,b);
}
int main(void)
{
    int x=6,y=8;
    func(x,y);
    printf("In main x= %d and y= %d\n",x, y);
    return 0;
}