#include <stdio.h>
#include <math.h>
int main()
{
    int bin,dec,a,b,sum=0;
    printf("enter the binary number");
    scanf("%d",&bin);
    for(b=0;bin!=0;b++)
    {
        a=bin%10;
        sum=sum+(a*(pow(2,b)));
        bin=bin/10;
    }
    printf("hexa decimal no is: %x\n",sum);
    printf("decimal no is: %d",sum);
}