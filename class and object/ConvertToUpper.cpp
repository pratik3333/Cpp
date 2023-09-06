#include<iostream>
using namespace std;

class ConvertToUpper
{
private:
    char *m;
    // char mu[90];
    
public:
   void setCharArray(char ch[])
   {
      m=ch;
    
   }
   void convertToUpper()
   {
    int i=0,ck=0;
       
        while (m[i]!='\0')
        {
            if (m[i] >= 'a' && m[i]<='z')
            {
                m[i]=m[i]-32;
                // int as=m[i];
                // as=as-32;
                // mu[i]=as;
                // ck++;
            }
            // else
            // {
            //     mu[i]=m[i];
            // }
            i++;
        }
        // mu[i]='\0';
             
   }
   void display()
   {
        cout<<"\n String is: \n";
        cout<<m;
        // cout<<mu;

        
   }
};

int main()
{
    char ch[90];
    ConvertToUpper cn;
    cout<<"\nEnter string: \n";
    cin>>ch;
    cn.setCharArray(ch);
    cn.convertToUpper();
    cn.display();
}