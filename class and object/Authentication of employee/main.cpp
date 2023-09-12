#include <iostream>
#include <string.h>
using namespace std;

class UserAuthetication
{
private:
    char user[90];
    int pass;
    FILE *fptr;

public:
    void setUser(char[], int);
    void checkUser(char[], int);
};

void UserAuthetication::setUser(char user1[], int pass1)
{
    strcpy(user, user1);
    pass = pass1;
    fptr = fopen("H:\\Cpp\\class and object\\Authentication of employee\\userdata.txt", "a+");
    fprintf(fptr, "%s\t%d\n", user, pass);
    fclose(fptr);
    cout << "\nData save succesfully...\n";
}

void UserAuthetication::checkUser(char user1[], int pass1)
{
    int flag=0;
    fptr = fopen("H:\\Cpp\\class and object\\Authentication of employee\\userdata.txt", "r+");

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
        cout<<"\nUser is authenticator\n";
    }
    else
    {
        cout<<"\nLogin failed\n";
    }
    // fclose(fptr);
}

int main()
{
    UserAuthetication UA;
    int choice;

    do
    {
        cout << "\n1.Set User\n";
        cout << "\n2.check User\n";
        cout << "\nEnter choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            char user1[90];
            int pass1;
            cout << "\nEnter user name and password\n";
            cin >> user1 >> pass1;
            UA.setUser(user1, pass1);
        }
        break;
        case 2:
        {
            char user1[90];
            int pass1;
            cout << "\nEnter user name and password\n";
            cin >> user1 >> pass1;
            UA.checkUser(user1, pass1);
        }
        break;
        default:
        cout<<"\nInvalid input\n";
            break;
        }
    } while (choice > 2);
}