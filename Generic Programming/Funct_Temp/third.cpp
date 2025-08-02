#include<iostream>
#include<algorithm>
using namespace std;
template <class t>
t swap(t *x,t *y)
{
    // swap(*x,*y);
    t temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=20;
    float c=3.3,d=55.5;
    char e='A',f='B';
    cout<<"Before swapping "<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping "<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    cout<<endl;
    cout<<"Before swapping "<<endl;
    cout<<" c= "<<c<<" and d = "<<d<<endl;
    swap(&c,&d);
    cout<<"After swapping "<<endl;
    cout<<"c = "<<c<<" and d = "<<d<<endl;
    cout<<endl;
    cout<<"Before swapping "<<endl;
    cout<<" e= "<<e<<" and f = "<<f<<endl;
    swap(&e,&f);
    cout<<"After swapping "<<endl;
    cout<<"e = "<<e<<" and f = "<<f<<endl;
    return 0;

}