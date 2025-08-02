#include<iostream>
using namespace std;
int main()
{
    // int *ptr=new int(10);
    int *ptr=new int(5);//Dynamically value is allocated
    cout<<*ptr<<endl;
    *ptr=10;
    cout<<*ptr<<endl;
    delete ptr;//Memory is deallocated
    return 0;
}