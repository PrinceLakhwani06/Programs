#include <stdio.h>
void main()
{
    int a,b,c=0,d;
    printf("enter the no");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(c==d)
    {
        printf("no is palindrom");
    }
    else
    {
        printf("not a plandriom");
    }
}