#include<iostream>
using namespace std;

int main()
{
    int a[5],i;
    cout<<"\nEnter five values in array\n";
    for ( i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    
    cout<<"\nDisplay array values\n";
    for ( i = 0; i <5; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}