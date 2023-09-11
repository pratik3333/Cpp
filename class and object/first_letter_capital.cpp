#include <iostream>
#include <string.h>
using namespace std;

class firstCapi
{
private:
    char a[90], i;

public:
    void setString(char[]);
    void Display();
};

void firstCapi::setString(char a[90])
{
    strcpy(this->a, a);
}
void firstCapi::Display()
{
    i = 0;
    int count = 0;
    while (a[i] !='\0')
    {
        cout<<"\nI am 1\n";
        if (a[i]!= 32)
        {
            cout<<"\nI am second";
            ++count;
        }
        if (a[i]==32  || a[i]=='\0')
        {
            if (count>=5)
            {
                cout<<"\nDone\n";
            }
            count=0;
        }
        i++;
    }

    // cout << "\nResultant string is\n";
    // while (a[i] != '\0')
    // {
    //     cout << a[i];
    //     i++;
    // }
}

int main()
{
    firstCapi fc;
    char a[90];
    cout << "\nEnter string\n";
    gets(a);
    fc.setString(a);
    fc.Display();
}