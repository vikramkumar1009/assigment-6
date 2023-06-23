//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
main()
{
    int i=1,n,s=0;
    printf("enter the value of n to calculate the value of n odd natural numbers ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*2-1+s;
        i++;
    }
     printf("%d ",s);
    return 0;
}
