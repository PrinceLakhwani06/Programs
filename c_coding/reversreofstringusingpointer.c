//A program that reverses a string using pointers

#include <stdio.h>
#include <string.h>

void revString(int length, char *ptr)
{
    char *start = ptr;
    char *end = ptr + length - 1;
    char temp;

    for(; start < end; start++, end--)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    }
}

void main()
{

    int bin, *ptr, length;
    char SP[100];

    printf("ENTER THE STRING YOU WANT TO REVERSE: ");
    gets(SP);
    length = strlen(SP);

    revString(length, SP);

    printf("THE REVERSED STRING IS: ");
    puts(SP);
}