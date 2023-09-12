#include<iostream>
#include<string.h>
using namespace std;
FILE *fptr;
class product{
    int id;
    int price;
    char name[90];
    public:
    void setdetails()
    {
         fptr=fopen("H:\\Cpp\\File handling\\authenticater user\\deepakdb.txt","r+");
        cout<<"ENter id name and price";
        cin>>id>>name>>price;
         fprintf(fptr,"%d\t%s\t% %d",id,name,price);
         fclose(fptr);
         cout<<"\nData save succesfully\n";
    }
};
int main()
{
   product p;
   int id,price,i;
   char name[90];
   for(i=0;i<3;i++)
   {
    p.setdetails();
   }
}