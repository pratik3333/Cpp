#include<iostream>
using namespace std;

class gst
{
private:
    float p,q,gp;
public:
    void getValue(int,int,int);
    void bill();
};

void gst::getValue(int price,int quantity,int gstpercentage)
{
   p=price;
   q=quantity;
   gp=gstpercentage;
}
void gst::bill()
{
    float wg,g,f;
    wg=p*q;
    g=((p*q)/(100+gp))*100;
    f=wg-g;
    cout<<"\n with gst is: "<<wg;
    cout<<"\n without gst is: "<<g;
    cout<<"\ngst amount is: "<<f;


}

int main()
{
    gst gt;
    int price,quantity,gstpercentage;
    cout<<"\nEnter price and quantity and gst percentage:\n";
    cin>>price>>quantity>>gstpercentage;
    gt.getValue(price,quantity,gstpercentage);
    gt.bill();
    
}