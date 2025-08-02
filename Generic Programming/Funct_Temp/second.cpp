#include<iostream>
using namespace std;
template<class T> 
T large( T a,T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter two integers: "<<endl;
    cin>>i1>>i2;
    cout<<"Largest Interger is "<<large(i1,i2)<<endl;
    cout<<"Enter two float: "<<endl;
    cin>>f1>>f2;
    cout<<"Largest Float is "<<large(f1,f2)<<endl;
    cout<<"Enter two characters: "<<endl;
    cin>>c1>>c2;
    cout<<"Largest Character is "<<large(c1,c2)<<endl;
    return 0;

}