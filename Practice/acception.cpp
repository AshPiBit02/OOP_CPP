#include<iostream>
using namespace std;
void Divide(double a,double b)
{
    try{
        if(b==0)
        {
          throw b;
        }
         double result=double(a)/double(b);
         cout<<"Result: "<<result<<endl;
    }
    catch(double b)
    {
        cout<<"Exception: b can't be 0"<<endl;
    }
}
int main()
{
    Divide(5,0);
    Divide(10,5);
    return 0;
}