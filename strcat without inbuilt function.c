#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char str1[10], str2[10], str3[20];
    printf("Enter string 1: ");
    scanf ("%s", &str1);
    printf ("\nEnter string 2: ");
    scanf ("%s", &str2);
    int i,j;
    for (i=0; str1[i]!='\0'; i++)
    str3[i]=str1[i];
    for (j=0; str2[j]!=0; j++, i++)
    str3[i]=str2[j];
    str3[i]='\0';
    printf ("\nConcatenated string is %s.", str3);
    return 0;
}