#include<iostream>
using namespace std;

class element
{
private:
    int *m,count=1;
public:
    void setArray(int []);
    void getCount();
};

void element::setArray(int a[])
{
    m=a;

}
void element::getCount()
{
     for (int i = 0; i <5; i++)
     {
        for (int j =(i+1); j <5; j++)
        {
            if (m[i]>m[j])
            {
                int temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
            
        }
        
     }
     cout<<"\nDisplay after sorting\n";
     for (int i = 0; i <5; i++)
     {
        cout<<"\t"<<m[i];
     }
     
     for (int i = 0; i <5; i++)
     {
        if (m[i]==m[i+1])
        {
            ++count;
        }
        else
        {
            cout<<"\ncount of "<<m[i]<< " is "<<count;
            count=1;
        }
     }
     
}

int main()
{
    int a[5];
    element el;
    cout<<"\nEnter five elements in array: \n";
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    el.setArray(a);
    el.getCount();
}