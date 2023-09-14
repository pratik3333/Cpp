#include<iostream>
using namespace std;

class Value
{
    protected :
    int no1,no2;
    public :
    void setValue(int no1,int no2)
    {
        this->no1=no1;
        this->no2=no2;
    }
};

class add:public Value
{
    public:
    int addition()
    {
        // int additionoftwo=no1+no2;
        return no1+no2;
    }
    
};
class mul:public Value
{
    public:
    int multiplication()
    {
        // int multi=no1*no2;
        // return multi;
        return no1*no2;
    }
};
class DIV:public Value
{
    private:
    float d;
    public:
    int division()
    {
        d=no1/no2;
        cout<<"\nDivision of two number is "<<d;
    }
};

int main()
{
    int no1,no2;
    cout<<"\nEnter two number\n";
    cin>>no1>>no2;

    add ad;
    ad.setValue(no1,no2);
    int result=ad.addition();
    cout<<"\nAddition of two number is "<<result;

    mul m;
    m.setValue(no1,no2);
     result=m.multiplication();
    cout<<"\nMultiplication of two number is "<<result;
    
    DIV dvs;
    dvs.setValue(no1,no2);
    dvs.division();    


}