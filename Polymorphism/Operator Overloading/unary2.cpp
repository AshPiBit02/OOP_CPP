#include<iostream>
using namespace std;
class result
{
    public:
    int x,y,res;
    result(int a,int b)
    {
        x=a;
        y=b;
    }
    void operator &()
    {
        res=x&y;
    }
    void show()
    {
        cout<<"Result is "<<res<<endl;
    }
};
int main()
{
    result r(5,5);
    &r;
    r.show();
    return 0;
}