#include <stdio.h>
void main()
{
    int a,i,c;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%a==0)
        {
            c++;
        }
    }
    if(c==2 && a!=1)
    {
        printf("no is prime");
    }
    else
    {
        printf("no is not prime");
    }
}