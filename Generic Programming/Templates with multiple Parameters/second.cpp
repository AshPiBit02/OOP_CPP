//To pass one integer and one float value to template function and add them, then return the value in first datatype form
#include<iostream>
using namespace std;
template <class T1,class T2>
T1 add(T1 x,T2 y)
{
    return x+y;
}
int main()
{
    cout<<"The sum is "<<add(4,9.01)<<endl;//The first parameter is integer so  the function returns integer value
    cout<<"The sum is "<<add(10.4,4)<<endl;//The first parameter is floating value so the function return float value
    return 0;
}

