#include<iostream>
using namespace std;
#include<math.h>

class power
{
   private:
    int base,index;
    
    public:
    void setValue()
    {
    cout<<"\nEnter base and index\n";
    cin>>base>>index;
    }
    void getPower()
    {
        int sum=1;
        for (int i = 1; i <=index; i++)
        {
            sum=base*sum;
        }
        
         cout<<"\nPower of given number is: "<<sum;
        
    }
};

int main()
{
    power p;
    p.setValue();
    p.getPower();

    return 0;
   
}