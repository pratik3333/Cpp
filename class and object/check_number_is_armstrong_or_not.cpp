#include<iostream>
#include<math.h>
using namespace std;

class Armstrong
{
private:
    int n;
public:
   void setNo(int);
   void showResult();
};

void Armstrong::setNo(int no)
{
    n=no;
}

void Armstrong::showResult()
{
    int count=0,rem,sum=0,temp;
    temp=n;
    while (n!=0)
    {
        n=n/10;
        ++count;
    }
    cout<<"\nCount is"<<count;
    n=temp;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    n=temp;
    if (n==sum)
    {
        cout<<"\nNumber is armstrong number\n";
    }
    else
    {
        cout<<"\nNumber is not armstrong number\n";
    }
    
    
} 

int main()
{
    Armstrong arm;
    int no;
    cout<<"\nEnter number\n";
    cin>>no;
    arm.setNo(no);
    arm.showResult();
}