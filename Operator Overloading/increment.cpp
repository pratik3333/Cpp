#include <iostream>
using namespace std;

class increment
{
private:
    int no;

public:
    void setValue(int no)
    {
        this->no = no;
    }
    void operator -()
    {
        no=-no;
    }
    void show()
    {
        cout << "No is " <<no;
    }
};

int main()
{
    int no;
    increment in;
    cout << "\nEnter number\n";
    cin >> no;
    in.setValue(no);
    cout << "\nBefore operator overloading ";
    in.show();
    -in;
    cout << "\nAfter operator overloading ";
    in.show();

    return 0;
}
