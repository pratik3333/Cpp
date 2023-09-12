#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Validate_Us
{
private:
    FILE *fptr;
    int pass;
    char user[90];

public:
    void setUser(char user1[], int pass1)
    {
        strcpy(user, user1);
        pass = pass1;
        fptr = fopen("H:\\Cpp\\class and object\\authenticater user\\UandP.txt", "a+");
        fprintf(fptr, "%s\t%d\n", user, pass);
        fclose(fptr);
        cout << "\nData save succesfully\n";
    }
    int validateUser(char user1[], int pass1)
    {
        int flag = 0;
        fptr = fopen("H:\\Cpp\\class and object\\authenticater user\\UandP.txt", "r+");
        while (fscanf(fptr, "%s %d", &user, &pass) != EOF)
        {
            if ((strcmp(user1, user) == 0) && (pass1 == pass))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            return 1;
        }
        else
        {
            return -1;
        }
        
    }
};

int main()
{
    int choice;

    Validate_Us vu;
    do
    {
        cout << "\n1.Set User and password\n";
        cout << "\n2.check User authenticator user\n";
        cout << "\nEnter choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int pass1;
            char user1[90];
            cout << "\nEnter user name and password\n";
            cin >> user1 >> pass1;
            vu.setUser(user1, pass1);
        }
        break;

        case 2:
        {
            char user1[90];
            int pass1;
            cout << "\nEnter username\n";
            cin >> user1;
            cout << "\nEnter password\n";
            cin >> pass1;
           int result =vu.validateUser(user1, pass1);
           if (result==1)
           {
             cout<<"\nUser authentication succesfully completed...\n";
           }
           else
           {
            cout<<"\nUser authentication failed...\n";
           }
           
        }
        break;
        default:
            cout << "\nInvalid Input\n";
            break;
        }

    } while (choice > 2);
}
//Hello pratik i am testing this
