#include<iostream>
using namespace std;

int i;

int power(int x,int y)
{
    int p=1;
    for ( i = 1; i <y; i++)
    {
        p=p*y;
    }
    return p;
}

int main()
{
    // int power(int x,int y);
    int base,index;
    cout<<"\nEnter base and index\n";
    cin>>base>>index;
    int result = power(base,index);
    cout<<"Power is "<<result;


    return 0;
}