#include <stdio.h>
void main()
{
    int i,j,n;
    int a[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {    scanf("%d",&a[i]); // entered elements
    }
    for(i=0;i<n;i++) //pass
    {      
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]) // comparison
	        { // interchange
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }   
        }  
    }
    for(i=0;i<n;i++)
    {    printf("%d",a[i]); // entered elements
    }
}    