#include<iostream>
using namespace std;
int i,j,temp;
class sorting
{
private:
   int *m;
public:
    void setValue(int a[])
    {
        m=a;
    }
    void getsort()
    {
        for ( i = 0; i <5; i++)
        {
            for ( j =(i+1); j <5; j++)
            {
                if (m[i]>m[j])
                {
                    temp=m[i];
                    m[i]=m[j];
                    m[j]=temp;
                }
                
            }
            
        }
        
    }
    void displaySort()
    {
        
        for ( i = 0; i <5; i++)
        {
            cout<<m[i]<<"\t";
        }
        

    }

};

int main()
{
    int a[5];
    sorting s;
    cout<<"\nEnter 5 values in array\n";
    for ( i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    s.setValue(a);
    cout<<"\nDisplay array before sorting\n";
    s.displaySort();
    s.getsort();
    cout<<"\nDisplay array after sorting\n";
    s.displaySort();
    

}
