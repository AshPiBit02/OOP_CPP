#include<iostream>
using namespace std;
template <class T>
T product(T x,T y)
{
    cout<<"Template Funtion Called."<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
}
void product(int x,int y)
{
    cout<<"Integer Funtion Called."<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
}
void product(double x,double y)
{
    cout<<"Double Funtion Called."<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
}
int main()
{
    product(5,6);
    product(5.6,6.5);
    product(0.2f,3.9f);
    return 0;
}