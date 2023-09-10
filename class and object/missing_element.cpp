#include <iostream>
using namespace std;

int main()
{
    int a[5], i, j,diff=0;
    cout << "\nENter five values in array\n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < 5; i++)
    {
    //   diff = a[i + 1] - a[i];
    //     if (diff > 1)
    //     {
            for (j = a[i]; j < a[i + 1]-1;)
            {
                cout << "\t" << ++j;
            }
        // }
    }
    return 0;
}