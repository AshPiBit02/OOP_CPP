#include<iostream>
using namespace std;
template<class T> 
void Largest(T x,T y,T z)
{
    if(x>y&&x>z)
    {
        cout<<x<<" is the largest value."<<endl;
    }
    else if(y>z)
    {
        cout<<y<<" is the largest value."<<endl;
    }
    else
    {
        cout<<z<<" is the largest value."<<endl;
    }
}
template <class T>
void Largest(T x,T y)
{
    if(x>y)
    {
        cout<<x<<" is the largest value."<<endl;
    }
    else
    {
        cout<<y<<" is the largest value."<<endl;
    }
}
int main()
{
    Largest(5,10,99);// Function with three argument will be called (function overloading)
    return 0;
}