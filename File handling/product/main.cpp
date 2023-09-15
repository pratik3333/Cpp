#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class product
{
protected:
    int sproductID;

private:
    char pname[90];
    int pprice, quantity;
    int price, total, id, x = 1, count;
    FILE *fptr, *fptr1;

public:
    void setProduct(char pname[], int pprice, int quantity)
    {
        count = 0;
        fptr1 = fopen("H:\\Cpp\\File handling\\product\\idstore.txt", "a+");
        fprintf(fptr1, "%d\n", x);
        fclose(fptr1);
        fptr1 = fopen("H:\\Cpp\\File handling\\product\\idstore.txt", "r+");
        while (fscanf(fptr1, "%d", &x) != EOF)
        {
            ++count;
        }

        cout << "\nCount is\n"
             << count;

        this->id = count;
        strcpy(this->pname, pname);
        this->pprice = pprice;
        this->quantity = quantity;
        total = pprice * quantity;
        fptr = fopen("H:\\Cpp\\File handling\\product\\prodcut.txt", "a+");
        fprintf(fptr, "%d\t%s\t%d\t%d\t%d\n", id, pname, pprice, quantity, total);

        fclose(fptr);
        fclose(fptr1);
        cout << "\nProduct added succesfully.....\n";
    }
    void showProduct()
    {
        fptr = fopen("H:\\Cpp\\File handling\\product\\prodcut.txt", "r+");
        while (fscanf(fptr, "%d %s %d %d %d", &id, &pname, &pprice, &quantity, &total) != EOF)
        {
            cout << id << "\t" << pname << "\t" << pprice << "\t" << quantity << "\t" << total << "\n";
        }
        fclose(fptr);
    }
    void descending()
    {
        int x;
        fptr = fopen("H:\\Cpp\\File handling\\product\\prodcut.txt", "r+");
        while (fscanf(fptr, "%s %d %d %d", &pname, &pprice, &quantity, &total) != EOF)
        {
            for (int i = 0; i < EOF; i++)
            {
                for (int j = i + 1; j < EOF; j++)
                {
                }
            }
        }
        fclose(fptr);
    }

    void searchProduct() //
    {
        int flag = 0;
        char spname[90];
        // int sproductID;
        cout << "\nEnter product ID which you want to search\n";
        cin >> sproductID;
        // cin>>spname;
        fptr = fopen("H:\\Cpp\\File handling\\product\\prodcut.txt", "r+");
        while (fscanf(fptr, "%d %s %d %d %d", &id, &pname, &pprice, &quantity, &total) != EOF)
        {

            if (id == sproductID)
            {
                flag = 1;
                break;
            }
            // if (strcmp(pname,spname)==0)
            // {
            //     cout<<"\n product name Compared...";
            //     flag=1;
            //     break;
            // }
        }
        if (flag)
        {
            cout << id << "\t" << pname << "\t" << pprice << "\t" << quantity << "\t" << total;
            cout << "\nProduct found\n";
        }
        else
        {
            cout << "\nProduct not found\n";
        }
        fclose(fptr);
    }
};

int main()
{
    int choice;

    product p;
    do
    {
        cout << "\n1.Add product\n";
        cout << "\n2.Show all products\n";
        cout << "\n3.set descending products by price\n";
        cout << "\n4.Search product\n";
        cout << "\nEnter choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            char pname[90];
            int pprice, quantity;
            cout << "\nEnter product name, product price and product quantity\n";
            // _flushall();
            // gets(pname);
            cin >> pname >> pprice >> quantity;
            p.setProduct(pname, pprice, quantity);
        }
        break;
        case 2:
        {
            p.showProduct();
        }
        break;
        case 3:
            break;
        case 4:
        {
            p.searchProduct();
        }
        break;
        default:
            cout << "\nInvalid input";
            break;
        }
    } while (choice < 5);
}
