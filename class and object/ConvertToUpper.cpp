// 3. WAP to create class name as ConvertToUpper with two functions 
// void setCharArray(char[]): this function can accept character array as parameter 
// void convertToUpper(): this function can convert lower case character to upper case 
// void display(): this function can display string after conversion 

#include<iostream>
using namespace std;
#include<string.h>

class ConvertToUpper
{
private:
    char *m;  //we created pointer
    
public:
   void setCharArray(char ch[]) //created function setCharArray
   {
      m=ch;
    
   }
   void convertToUpper()   //created function convertToUpper
   {
    int i=0; //Pratik  
       
        while (m[i]!='\0')
        {
            if (m[i] >= 'a' && m[i]<='z')  
            {
                m[i]=m[i]-32;
            }
            i++;
        }
             
   }
   void display()
   {
        cout<<"\n converted String is: \n";
        cout<<m;
   }
};

int main()
{
    char ch[90];
    ConvertToUpper cn;
    cout<<"\nEnter string: \n";
    gets(ch);
    cn.setCharArray(ch);
    cn.convertToUpper();
    cn.display();
}