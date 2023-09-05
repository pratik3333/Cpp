#include<iostream>
using namespace std;

class Reverse
{
private:
    int no;
public:
    void setValue()
    {
        cout<<"\nEnter number: \n";
        cin>>no;
    }
    void getRev()
    {
        int rem,rev=0;
        while (no!=0)
        {
            rem=no%10;
            no=no/10;
            rev=rev*10+rem;
        }
        cout<<"\nReverse number is :"<<rev;
    }
};


int main()
{
    Reverse rev;
    rev.setValue();
    rev.getRev();
}