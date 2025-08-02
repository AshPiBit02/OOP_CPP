#include<iostream>
using namespace std;
void changeX(int x) //Change in external function's value, only manipulate the value inside this function only
{
    x=2*x;
    cout<<"X :"<<x<<endl;
}
int main()
{
    int x=10;
    changeX(x);
    cout<<"X :"<<x<<endl;// value of x in main function remains unchanged even if we manipulate the value in other external functions
}