#include<iostream>
using namespace std;
class Test
{
    int count;
    public:
    Test(int x)
    {
        count=x;
    }
    void operator --()
    {
        count=count-1;
    }
    void display()
    {
        cout<<"count: "<<count;
    }
};
int main()
{
    Test t(5);
    --t;
    t.display();
    return 0;
}