#include<iostream>
using namespace std;
void sum(int x,int y)
{
    cout<<"Integer function called"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}
void sum(double x,double y)
{
    cout<<"Double funtion called"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}
template <class T>
void sum (T x,T y)
{
    cout<<"Template funtion called"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}
void sum(float x,float y)
{
    cout<<"Float funtion called"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}
int main()
{
    sum(10,50);
    cout<<endl;
    sum(3.4,6.6);
    cout<<endl;
    sum(3.2f,5.4f);
    cout<<endl;
    sum<string>("Hello,"," World!");
    return 0;
}