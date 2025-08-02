//Templates with multiple parameters allows to pass different data types in a single template
#include<iostream>
using namespace std;
template<class T1,class T2>
void sum(T1 x,T2 y)
{
    cout<<"The sum is "<<x+y<<endl;
}
int main()
{
    sum(1,99.3);//Due to above two diffent template these two different are passed and result is obtained without any error
    return 0;
}