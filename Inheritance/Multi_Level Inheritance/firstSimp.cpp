#include<iostream>
using namespace std;
class FirstGen
{
    public:
    FirstGen()
    {
        cout<<"Binary Machine Code"<<endl;
    }
    ~FirstGen()
    {
        cout<<"FirstGen deconstructor"<<endl;
    }
};
class SecondGen:public FirstGen
{
    public:
    SecondGen()
    {
        cout<<"Assembly Code"<<endl;
    }
    ~SecondGen()
    {
        cout<<"SecondGen deconstructor"<<endl;
    }
};
class ThirdGen:public SecondGen
{
    public:
    ThirdGen()
    {
        cout<<"C++,Java,C,Pascal,FORTRAN,etc"<<endl;
    }
    ~ThirdGen()
    {
        cout<<"ThirdGen deconstructor"<<endl;
    }
};
class FourthGen: public ThirdGen
{
    public:
    FourthGen()
    {
        cout<<"SQL,LISP,etc"<<endl;
    }
    ~FourthGen()
    {
        cout<<"FourthGen deconstructor"<<endl;
    }
};
class FifthGen: public FourthGen
{
    public:
    FifthGen()
    {
        cout<<"Natural Language"<<endl;
    }
    ~FifthGen()
    {
        cout<<"FifthGen deconstructor"<<endl;
    }
};
int main()
{
    FifthGen obj;
    return 0;
}