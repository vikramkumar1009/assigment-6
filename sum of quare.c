//Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
main()
{
    int i=1,n,s=0;
    printf("enter the value of n to calculate the quares of n natural numbers ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*i+s;
        i++;
    }
     printf("%d ",s);
    return 0;
}
