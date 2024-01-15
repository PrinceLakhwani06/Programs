#include <stdio.h>
int main()
{
    int array[100],a,b,large=0,large2=0,e,f;
    printf("enter the no of elements");
    scanf("%d",&a);
    printf("enter the elements in array");
    for(b=0;b<a;b++)
    {
        scanf("%d",&array[b]);
    }
    for(b=0;b<a;b++)
    {
        if(large<array[b])
        {
            large=array[b];
            e=b;
        }
    }
    for(b=0;b<a;b++)
    {
        if(b==e)
        {
            b++;
            b--;
        }
        else if(large2<array[b])
        {
            large2=array[b];
            f=b;
        }
    } 
    printf("second largest no in array= %d at position %d",array[f],f);
}