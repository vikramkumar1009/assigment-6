//Write a program to reverse a given number
#include<stdio.h>
main()
{
    int x,y=0,r;
    printf("enter any number to reverse ");
    scanf("%d",&x);
    while(x!=0)
    {
       r=x%10;
       y=y*10+r;
       x=x/10;
    }
    printf("reverse number is %d",y);


    return 0;
}
