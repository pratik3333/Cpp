#include<iostream>
using namespace std;

class addElement
{
private:
    int *m,ind,val;
public:
    void getArray(int []);
    
    void addele();
    void Display();

};

void addElement ::getArray(int a[])
{
    m=a;
}

void addElement ::addele()
{
    cout<<"\nEnter on which position you want to add element\n";
    cin>>ind;
    cout<<"\nEnter value\n";
    cin>>val;
    for (int i = 4; i >=0; i--)
    {
        m[i+1]=m[i];
        if (i==ind)
        {
            m[i]=val;
            break;
        }

    }
    

}
void addElement::Display()
{
    cout<<"\nAfter adding\n";
    for (int i = 0; i <6; i++)
    {
        cout<<m[i]<<"\t";
    }
    
}

int main()
{
    int a[5];
    addElement ad;
    cout<<"\nEnter array values\n";
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    ad.getArray(a);
    ad.addele();
    ad.Display();
}