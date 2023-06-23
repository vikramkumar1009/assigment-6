//Write a program to calculate LCM of two numbers
#include<stdio.h>
main()
{
    int x,y,L;
    printf("enter two  number to find Lcm ");
    scanf("%d%d",&x,&y);
    for(L=1;L<=x*y;L++)
        if(L%x==0&&L%y==0)
        break;
    printf("LCM is %d ",L);

    return 0;
}
