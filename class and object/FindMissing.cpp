#include <iostream>
#include<unistd.h>
using namespace std;

// int i,j;

class FindMissing
{
private:
    int *m;

public:
    void SetArray(int a[])
    {
        m = a;
    }
    void getMissing()
    {
        int i, j;
        int diff = 0;
        for (i = 0; i < 5; i++)
        {
        // cout<<"Value is "<<i<<"\t"<<j;
        // sleep(5);

            // for ( j = m[i]; j <m[i+1]-1;)  //this logic also work there is no need to calculate diffrence
            // {
            //     cout<<"\t"<<++j;
            // }
            
            diff = m[i + 1] - m[i];
            if (diff > 1)
            {
                for (j = m[i]; j <m[i+1]-1;)
                {
                   cout<<++j<<"\t";
                }
            }
        }
    }
};

int main()
{
    int a[5];
    FindMissing fm;
    cout << "\nEnter five values in array\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    fm.SetArray(a);
    fm.getMissing();
}