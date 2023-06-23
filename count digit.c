//Write a program to count digits in a given number
#include<stdio.h>
main()
{
    int n,count=0;
    printf("enter the number to count digitt ");
    scanf("%d",&n);
    for( ;n!=0;count++)
    {
       n=n/10;
    }
    printf("total digit in number is %d ",count);
    return 0;
}
