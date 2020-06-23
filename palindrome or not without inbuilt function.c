#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[50];
    int n=0, i, j, flag=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        n++;
    for(i=0, j=n-1; i<(n/2); i++, j--)
    {
        if(str[i]!=str[j])
            flag++;
    }
    printf("\nReverse of the string is: ");
    for(i=n-1; i>=0; i--)
        putchar(str[i]);
    printf("\n");
    if(flag==0)
        printf("The string is a palindrome. ");
    else
        printf("The string is not a palindrome. ");
    return 0;
}