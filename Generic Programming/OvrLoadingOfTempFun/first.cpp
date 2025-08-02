#include<iostream>
using namespace std;
void max_num(int x,int y)
{
    cout<<"Normal integer function called."<<endl;
    if(x>y)
    {
        cout<<x<<" is largest."<<endl;
    }
    else
    {
        cout<<y<<" is largest"<<endl;
    }
}
void max_num(double x,double y)
{
    cout<<"Normal double function called."<<endl;
    
    if(x>y)
    {
        cout<<x<<" is largest"<<endl;
    }
    else
    {
        cout<<y<<" is largest"<<endl;
    }
    
}
template<class T>
void max_num(T x,T y)
{
    cout<<"Template Function called."<<endl;
    if(x>y)
    {
        cout<<x<<" is largest"<<endl;
    }
    else
    {
        cout<<y<<" is largest"<<endl;
    }
}
int main()
{
    max_num(10, 20); // Calls the normal integer function
    max_num(10.5, 20.5); // Calls the normal double function
    max_num(2.3f,9.1f);//indicate that the value is float value
    return 0;
}