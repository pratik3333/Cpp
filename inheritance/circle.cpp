#include<iostream>
using namespace std;

class Circle
{
    protected:
    float r,pi=3.14f;
    public:
    void setRadius(float r)
    {
        this->r=r;
    }
};

class Area:public Circle
{
    private:
    float a;
    public:
    void getArea()
    {
        a=pi*r*r;
        cout<<"\nArea of circle is "<<a;
    }
};


class cirm:public Circle
{
    private:
    float cir;
   public:
   void getCircumference()
   {
    cir=2*pi*r;
    cout<<"\nCircumference of circle is "<<cir;
   }
};

int main()
{
    float r;
    cout<<"\nEnter radius of circle\n";
    cin>>r;
    Circle c;

    Area are;
    are.setRadius(r);
    are.getArea();

    cirm circum;
    circum.setRadius(r);
    circum.getCircumference();

}