#include<iostream>
using namespace std;
template <class T>
T sum(T x,T y)
{
    return x+y;
}
template <class T>
T avg(T x,T y)
{
    return (x+y)/2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    cout<<"Enter two integers: "<<endl;
    cin>>i1>>i2;
    cout<<"Sum is "<<sum(i1,i2)<<endl;
    cout<<"Average is "<<avg(i1,i2)<<endl;
    cout<<endl;
    cout<<"Enter two float values: "<<endl;
    cin>>f1>>f2;
    cout<<"Sum is "<<sum(f1,f2)<<endl;
    cout<<"Average is "<<avg(f1,f2)<<endl;
    return 0;
}
