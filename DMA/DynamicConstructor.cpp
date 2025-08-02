//It is a constructor that allocates memory dynamically using "new" in side constructor when an object is created
#include<iostream>
using namespace std;
class Test{
    private:
    int *ptr;//we can declare this pointer in public class also but not inside test constructor because the destructor can be called since the scope of ptr will only inside the test constructor
    public:
    Test(int x)
    {
        ptr=new int;
        *ptr=x;
        cout<<"Constructor called"<<endl;
    }
    void display()
    {
        cout<<"Value is "<<*ptr<<endl;
    }
    ~Test()
    {
        delete ptr;
        cout<<"Destructor called"<<endl;
    }

};
int main()
{
    Test obj(22);
    obj.display();
    return 0;
}
