#include<iostream>
using namespace std;

class gst
{
private:
    float p,q;
public:
    void getValue(int,int);
    void bill();
};

void gst::getValue(int price,int quantity)
{
   p=price;
   q=quantity;
}
void gst::bill()
{
    float wg,g,f;
    wg=p*q;
    g=((p*q)/118)*100;
    f=wg-g;
    cout<<"\n with gst is: "<<wg;
    cout<<"\n without gst is: "<<g;
    cout<<"\ngst amount is: "<<f;


}

int main()
{
    gst gt;
    int price,quantity;
    cout<<"\nEnter price and quantity:\n";
    cin>>price>>quantity;
    gt.getValue(price,quantity);
    gt.bill();
    
}