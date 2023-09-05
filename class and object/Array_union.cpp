#include <iostream>
using namespace std;

class Union
{
    int i, j, flag, count = 0;

private:
    int *m, *n, c[10];

public:
    void setValue(int a[], int b[])
    {
        m = a;
        n = b;
    }
    void getUnion()
    {
        for (i = 0; i < 5; i++)
        {
            c[i] = m[i];
            ++count;
        }

        int x = count;
        for (i = 0; i < 5; i++)
        {
            
            flag = 0;
            for (j = 0; j < 5; j++)
            {
                if (n[i] == m[j])
                {
                    flag = 1;
                    
                    break;
                }
            }
            if (flag==0)
            {
                c[x] = n[i];
                ++x;
                
            }
        }

        for (i = 0; i < x; i++)
        {
            cout << c[i] << "\t";
        }
    }
};

int main()
{
    int a[5], b[5], i;
    Union un;
    cout << "\nEnter first array value:\n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter second array value:\n";
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    un.setValue(a, b);
    un.getUnion();
}