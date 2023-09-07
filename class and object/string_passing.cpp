#include <iostream>
#include <string.h>
using namespace std;

class strings
{
    char n[90];

public:
    void setString(char name[])
    {
        strcpy(n, name);
    }
    int getLen()
    {
        int count = 0;
        while (n[count] != '\0')
        {
            ++count;
        }

        return count;
    }
};

int main()
{
    char name[90];
    cout << "\nEnter string\n";
    cin >> name;
    strings st;
    st.setString(name);

    int result = st.getLen();
    cout << "\nLenght of string is: " << result;
}
