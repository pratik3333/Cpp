#include<iostream>
using namespace std;

class ArrParent
{
      protected:
      int *a;
      public:
      void setValue(int a[])
      {
            this->a=a;
      }
      virtual int getResult()=0;
};


class Max:public ArrParent
{
    public:
    int getResult()
    {
        int m=a[0];
        for (int i = 1; i <5; i++)
        {
            if (m<a[i])
            {
                m=a[i];
            }
            
        }
        
        return m;
    }

};
class sum:public ArrParent
{
    public:
    int getResult()
    {
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum=sum+a[i];
        }
        return sum;
    }
    
};

int main()
{
     ArrParent *ar;
    Max mx;
     sum s;
     int a[5];
     cout<<"\nEnter five values in array:\n";
     for (int i = 0; i <5; i++)
     {
        cin>>a[i];
     }
     int choice,r;
     cout<<"\nEnter choice\n";
     cin>>choice;
     switch (choice)
     {
     case 1:
        ar=&mx;
        ar->setValue(a);
         r=ar->getResult();
        cout<<"\nMaximum value is "<<r;
        break;

        case 2:
        ar=&s;
        ar->setValue(a);
        r=ar->getResult();
        cout<<"\nSum is "<<r;
        break;
     
     default:
         cout<<"\nInvalid Input";
        break;
     }


}