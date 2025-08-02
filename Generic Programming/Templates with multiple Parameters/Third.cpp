#include<iostream>
using namespace std;
template <class T1,class T2>
class Demo
{
    T1 x;
    T2 y;
    public:
    Demo(T1 x,T2 y)
    {
        this->x=x;
        this->y=y;
    }
    void show()
    {
        cout<<"First Value : "<<x<<endl<<"Second Value : "<<y<<endl;
        cout<<endl;
    }
};

int main()
{
    Demo <int,float>obj1(5,10.52);
    obj1.show();
    Demo <string,int>obj2("Hello, ",10);
    obj2.show();
    return 0;
}
