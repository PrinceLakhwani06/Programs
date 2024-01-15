#include <stdio.h>
void main()
{
    int arr[6],a,b;
    for(a=0;a<6;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(a=5;a>=0;a--)
    {
        printf("%d",arr[a]);
    }
}