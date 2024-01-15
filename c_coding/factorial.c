#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    b=a-1;
    c=a;
    while(b!=0)
    {
       c=c*(a-b);
       b--;
    }
    printf("so the factorial of %d is %d",a,c);
}