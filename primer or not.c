//Write a program to check whether a given number is a Prime number or
#include<stdio.h>
main()
{
    int n,i;
    printf("enter the number to check number is prime or not ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(n%i==0)
        break;
    if(n==i)
        printf("number is prime ");
    else
        printf("number is not prime");

    return 0;
}
