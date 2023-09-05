#include<iostream.>
using namespace std;

class Cube
{
private:
     int no;
    
public:
    void setCube()
    {
        cout<<"\nEnter number\n";
        cin>>no;
    }
    void getCube()
    {
        int sum=1;
        for (int i = 1; i <=3; i++)
        {
            sum=sum*no;
        }
        cout<<"Cube is: "<<sum;
    }
     
};

int main()
{
    Cube cub;
    cub.setCube();
    cub.getCube();
}