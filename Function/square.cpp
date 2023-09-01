#include<iostream>
using namespace std;

int main()
{
    
    int no;
    int square(int);
    cout<<"\nEnter number\n";
    cin>>no;
    int result=square(no);
    cout<<"\nSquare is "<<result;
    
    return 0;
}

int square(int x)
{
    return x*x;
}

