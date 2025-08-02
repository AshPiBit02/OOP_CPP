#include<iostream>
using namespace std;
template<class T>
void add(T x,T y)// use void(if no return type),template name(if want to return same datatype), other datatype as per need
{
    cout<<x+y;
}
int main()
{
    add(2,5);
    return 0;
}