//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
main()
{
    int i=1,n,s=0;
    printf("enter the value of n to calculate the cubes of n natural numbers ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*i*i+s;
        i++;
    }
     printf("%d ",s);
    return 0;
}
