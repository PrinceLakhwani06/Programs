#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the whose table you want: ";
    cin>>a;
    for(b=1;b<=10;b++)
    {
        cout<<a*b<<"\n";
    }
    return 0;
}