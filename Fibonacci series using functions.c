#include<stdio.h>
#include<stdlib.h>
void fibo(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	fibo(n);
	return(0);
}
void fibo(int num)
{
	int a=0,b=1,c,i;
	printf("%d\t%d\t",a, b);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
