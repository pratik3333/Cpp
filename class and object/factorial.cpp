#include<iostream>
using namespace std;

class factorial
{
private:
    int no;
public:
    
    void setValue()
    {
        cout<<"\nEnter number\n";
        cin>>no;
    }
    void getFact()
    {
        int i,sum=1;
        for ( i = 1; i <=no; i++)
        {
            sum=i*sum;
        }
        
        cout<<"\nFactorial of given number is: "<<sum;
    }
};

int main()
{
    factorial fact;
    fact.setValue();
    fact.getFact();
}