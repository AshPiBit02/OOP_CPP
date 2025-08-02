#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int* ptrn=NULL;
    int* ptr=&a;//pointer
    int** ptr2=&ptr;//pointer to pointer
    cout<<*ptr;
    cout<<endl<<**ptr2;//dereferencing the address of a
    // cout<<endl<<*ptr2;//print address of first pointer
    // cout<<endl<<**ptr2;
    cout<<endl<<ptrn<<endl;

    return 0;
}