#include<iostream>
using namespace std;
void update(int a)//pass by value
{
    a=20;
}
void update2(int* a)//pass by reference using pointer or we can use int &a(usinge allias)
{
    *a=10;
}
int main()
{
    int a=5;
    int *ptr=&a;
    update(a); // a is still 5 because we passed by value
    cout << "After Pass b value: " << a << endl; // Output: 5

    update2(ptr); // a is now 10 because we passed by reference
    cout << "After Pass by reference: " << a << endl; // Output: 10
    return 0;
}