#include <stdio.h>
void main()
{
    int a,b,c=0,d;
    printf("enter the 3 digit number");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c+b*b*b;
        a=a/10;
    }
    if(c==d)
    {
        printf("no is armstrong");
    }
    else
    {
        printf("not a armstrong no");
    }
}