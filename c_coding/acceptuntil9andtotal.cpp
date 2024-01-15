#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b=0;
    do
    {
        cout<<"enter the number: ";
        cin>>a;
        b=b+a;
    } while (a!=9);
    cout<<b;
    
}