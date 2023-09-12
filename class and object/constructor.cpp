#include<iostream>
using namespace std;

class constructor
{
    int p,base,index;
public:
   constructor()
   {
     p=1;
   }
   void setPower(int base,int index)
   {
      this->base=base;
      this->index=index;
   }
   void showResult()
   {
       int i;
       for ( i = 0; i <index; i++)
       {
          p=p*base;
       }
       cout<<"\nPower of "<<base<<" is "<<p;
   }
};

int main()
{
    int base,index;
    cout<<"\nEnter base and index\n";
    cin>>base>>index;
    constructor cn;
    cn.setPower(base,index);
    cn.showResult();
}