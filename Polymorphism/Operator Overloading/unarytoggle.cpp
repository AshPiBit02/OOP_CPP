#include<iostream>
using namespace std;
class Test
{
    public:
    bool num=true;
    void operator ~()
    {
        num=!num;
    }
    void display()
    {
        cout<<num<<endl;
    }
};
int main()
{
    Test t;
    ~t;
    t.display();
    return 0;
}