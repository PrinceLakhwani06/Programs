#include <stdio.h>
void main()
{
    int arr[6],a,b,c;
    for(a=0;a<6;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(a=0;a<5;a++)
    {
        for(b=0;b<5-a;b++)
        {
            if(arr[b]>arr[b+1])
            {
                c=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=c;
            }    
        }
    }
    for(a=0;a<6;a++)
    {
        printf("%d",arr[a]);
    }
}