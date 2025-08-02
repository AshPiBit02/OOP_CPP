#include<iostream>
using namespace std;
template <class T,int n>
void display(T a)
{
    cout<<"Template value is "<<a<<endl;
    cout<<"Non-tempate value is "<<n<<endl;
    cout<<endl;
}
int main()
{
    display<char,10>('A');
    display<int,10>('A');
    display<string,10>("A");
    return 0;
}