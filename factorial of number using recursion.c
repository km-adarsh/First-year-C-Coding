#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main ()
{
    int num;
    printf("Enter number: ");
    scanf ("%d", &num);
    printf("%d!=%d", num, fact (num));
    return 0;
}
int fact (int n)
{
    if(n<2)
    return n;
    return n*fact (n-1);
}