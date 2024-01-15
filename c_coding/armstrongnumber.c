#include <stdio.h>
#include <math.h>
void main()
{
     int b,d=0,e,c,a,k;
     printf("enter the number of digit");
     scanf("%d",&a);
     printf("enter the number");
     scanf("%d",&b);
     k=b;
     for(e=0;e<a;e++)
     {    c=b%10;
          d+=pow(c,a);
          b=b/10;
     }     
     if(d==k)
     {
          printf("number is armstrong");
     }
     else
     {
          printf("not armstrong");
     }
}
