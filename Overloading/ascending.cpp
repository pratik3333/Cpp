#include <iostream>
using namespace std;

int i, j, temp,svalue;
int main()
{

    int a[5];
    void arrOp(int a[]);
    void arrOp(int a[],int svalue);
    cout << "\nEnter five values in array:\n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout<<"\nEnter search value\n";
    cin>>svalue;
    arrOp(a);
    arrOp(a,svalue);
    return 0;
}

void arrOp(int a[])
{
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Display after sorting\n";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
}

void arrOp(int a[],int svalue)
{
    int flag=0;
    for ( i = 0; i <5; i++)
    {
        if (a[i]==svalue)
        {
            flag=1;
            break;
        }
        
    }
    if (flag)
    {
        cout<<"\n\nValue found\n"<<svalue;
    }
    else
    {
        cout<<"\n\nValue Not Found\n";
    }
    
    
    
}