#include<iostream>
using namespace std;
template<class T>
class Result
{
    private:
    T x,y,z;
    public:
    Result(T a,T b,T c)
    {
        x=a;y=b;z=c;
     cout<<"The sum is "<<x+y+z<<endl;
    }
};
int main()
{
    Result r(1,2,3);
    return 0;

}