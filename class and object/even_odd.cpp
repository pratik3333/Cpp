#include<iostream>
using namespace std;

class even_odd
{
private:
    int *m,p[5],q[5];
    int x=0,y=0;
public:
void setData(int a[]);
    void evenOdd();
    void Display();
};

void even_odd:: setData(int a[])
{
    m=a;
}
void even_odd::evenOdd()
{
    
    for (int i = 0; i <5; i++)
    {
        if (m[i]%2==0)
        {
            p[x]=m[i];
            x++;
        }
        else
        {
            q[y]=m[i];
            y++;
        }
        
    }
    
}
void even_odd::Display()
{
    cout<<"\nEven numbers are: \n";
    for (int i = 0; i <x; i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<"\nOdd Numbers are: \n";
    for (int i = 0; i <y; i++)
    {
        cout<<q[i]<<"\t";
    }
    
}

int main()
{
    int a[5];
    even_odd eo;
    cout<<"\nEnter five value in array:\n";
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    eo.setData(a);
    eo.evenOdd();
    eo.Display();
    
    
}