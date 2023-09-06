#include<iostream>
#include<string.h>
using namespace std;
class product
{
private:
    int id,price;
    char name[90];
public:
    int getPrice(){
        return price;
    }
    void getProduct()
    {
       cout<<"\nEnter id name and price: \n";
       cin>>id>>name>>price;
    }
    void display()
    {
        cout<<id<<name<<price;
         
    }
};


int main()
{
    product p[3];
    int id,i,j;
    char name[40];
    for ( i = 0; i <3; i++)
    {
       p[i].getProduct();
    }

    for ( i = 0; i <3; i++)
    {
       p[i].display();
        cout<<"\n";
    }
    for ( i = 0; i <5; i++)
         {
            for ( j = i+1; j <5; j++)
            {
                if(p[i].getPrice()>p[j].getPrice())
                {
                    product temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
                
            }
            
         }

    
    for ( i = 0; i <3; i++)
    {
       p[i].display();
       cout<<"\n";
    }
    return 0;
}