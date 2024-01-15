#include <stdio.h>
void main()
{
    char arr[50],b=0,i;
    printf("enter the sentence");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        b++;
    }
    for(i=0;i<b;i++)
    {
        if(arr[i]>=97 && arr[i]<=122)
        {
            arr[i]=arr[i]-32;
        }
    }
    puts(arr);
}