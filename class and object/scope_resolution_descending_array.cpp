#include <iostream>
using namespace std;

class Descending
{
private:
    int *m;

public:
    void setArray(int[]);
    void getDescending();
    void Display();
    void getAscendig();
};

void Descending::setArray(int a[])
{
    m = a;
}

void Descending::getDescending()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (m[i] < m[j])
            {
                int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
}

void Descending::getAscendig()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (m[i] > m[j])
            {
                int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
}

void Descending::Display()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << m[i];
    }
}

int main()
{
    int a[5];
    Descending de;
    cout << "\nEnter Five values in array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    de.setArray(a);
    int choice;

    do
    {
    cout << "\nEnter your choice\n";
    cout << "\n1:Descending";
    cout << "\n1:Ascending\n";
    cin >> choice;

        switch (choice)
        {
        case 1:
            de.getDescending();
            cout << "\nDisplay after descending\n";
                de.Display();
            break;
        case 2:
            de.getAscendig();
            cout << "\nDisplay after Ascending\n";
                de.Display();
            break;
        default:
            cout << "\nInvalid Input\n";
            break;
        }

    } while (choice <3);


}