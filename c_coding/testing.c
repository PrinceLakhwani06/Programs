#include <stdio.h>
int main()
{
    int array1[100],array2[100],array3[200],a,b,c,d,e,f;
    printf("enter the no of elements in array1");
    scanf("%d",&a);
    printf("enter the elements in array1");
    for(b=0;b<a;b++)
    {
        scanf("%d",&array1[b]);
    }
    printf("enter the no of elements in array2");
    scanf("%d",&c);
    printf("enter the elements in array2");
    for(b=0;b<c;b++)
    {
        scanf("%d",&array2[b]);
    }
    b=0;
        for(d=0;d<a;d++)
        {   
            array3[b]=array1[d];
            b++;
        }    
        for(e=0;e<c;e++)
        {
            for(d=0;d<a;d++)
            {
                if(array1[d]==array2[e])
                {
                    e++;
                }
            }    
           array3[b]=array2[e];
           b++;    
        }  
        for(e=0;e<b;e++)
        {
            printf("\n%d",array3[e]);
        }
}       