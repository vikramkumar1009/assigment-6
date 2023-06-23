//Write a program to calculate factorial of a number
#include<stdio.h>
main()
{
    int i,n,s=1;
    printf("enter the value of n to calculate the cubes of n natural numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;

    }
     printf("%d ",s);
    return 0;
}
