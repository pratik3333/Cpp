#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    int id,salary;
    char name[90];

    public:
    void setData(int id,char name[],int salary)
    {
       this->id=id;
       strcpy(this->name,name);
       this->salary=salary;

    }

    int operator ==(Employee emp2)
    {
        if ((this->id==emp2.id) && (strcmp(this->name,emp2.name)==0) && (this->salary==emp2.salary))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

};

int main()
{
   int id,salary;
   char name[90];
   Employee emp,emp1;
   cout<<"\nEnter ID, Name and salary\n";
   cin>>id>>name>>salary;
   emp.setData( id, name, salary);
   cout<<"\nEnter ID,Name and salary\n";
   cin>>id>>name>>salary;
   emp1.setData( id, name,salary);

   int result= emp == emp1;
   if (result)
   {
    cout<<"\nData Matched.....\n";
   }
   else
   {
    cout<<"\nData not Matched....";
   }
   
   return 0;


}