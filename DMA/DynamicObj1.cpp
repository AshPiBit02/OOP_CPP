//It is an object created at runtime using dynamic memory allocation using new operator in main function
#include<iostream>
using namespace std;
class Add{
    private:
    int a,b;
    public:
    void getValue(int a,int b)//since a and b are private member so we use this pointer to access them
    {
        this->a=a;//this->a is the private member and a is the parameter
        this->b=b;//this->b is the private member and b is the parameter
    }
    int sum()
    {
        return a+b;
    }
};
int main()
{
    Add *ptr=new Add;//dynamic object is created
    ptr->getValue(10,20);
    cout<<"Sum="<<ptr->sum()<<endl;
    delete ptr;//dynamic object is destroyed
    return 0;
}