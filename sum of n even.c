//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
main()
{
    int i=1,n,s=0;
    printf("enter the value of n to calculate the value of n even natural numbers ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*2+s;
        i++;
    }
     printf("%d ",s);
    return 0;
}
