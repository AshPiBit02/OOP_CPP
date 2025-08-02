#include<iostream>
using namespace std;
template<class T>
class Demo
{
    T a,b,c;
    public: 
    Demo(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    void disSum()
    {
        c=a+b;
        cout<<"The sum is "<<c<<endl;
    }
};
int main()
{
    Demo obj(3,4);
    Demo obj1(3.5,4.33);
    Demo <string>obj3("A","B");
    obj.disSum();
    obj1.disSum();
    obj3.disSum();
    return 0;
}