#include <iostream>
#include <string.h>
using namespace std;

class anagram
{
private:
    char a[90], b[90];

public:
    anagram(char a[], char b[])
    {
        strcpy(this->a, a);
        strcpy(this->b, b);
    }
    int checkAnagram()
    {
        int len1 = strlen(a);
        int len2 = strlen(b);
        // cout << "\nlength of first array is \t" << len1;
        // cout << "\nlength of second array is \t" << len2;
        int flag=0;
        if (len1==len2)
        {
            for (int i = 0; i <len1; i++)
            {
                for (int j = 0; j <len2; j++)
                {
                    if (a[i]==b[j])
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        flag=0;
                    }
                    
                }
                
            }
            if (flag==1)
            {
                return 1;
            }
            else
            {
                return -1;
            }
            
            
            
        }
        else
        {
            return -1;
        }
        
    }
};

int main()
{
    char a[90], b[90];
    cout << "\nEnter first string\n";
    cin >> a;
    cout << "\nEnter second string\n";
    cin >> b;
    anagram an(a, b);
    int result=an.checkAnagram();
    if (result==1)
    {
        cout<<"\nStrings are anagram strings\n";
    }
    else
    {
        cout<<"\nStrings aren't anagram strings\n";
    }
    
    
}