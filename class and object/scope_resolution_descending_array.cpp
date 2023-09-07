#include<iostream>
using namespace std;

class Descending
{
private:
    int *m;
public:
    void setArray(int []);
    void getDescending();
    void Display();
};

void Descending::setArray(int a[])
{
    m=a;
}

void Descending::getDescending()
{
    for (int i = 0; i <5; i++)
    {
        for (int j =i+1; j < 5; j++)
        {
            if (m[i]<m[j])
            {
                int temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
            
        }
        
    }
    
}

void Descending::Display()
{
    cout<<"\nDisplay after descending\n";
    for (int i = 0; i <5; i++)
    {
        cout<<"\t"<<m[i];
    }
    
}

int main()
{
    int a[5];
    Descending de;
    cout<<"\nEnter Five values in array:\n";
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    de.setArray(a);
    de.getDescending();
    de.Display();
    
}