//Constructor and destructor in Inheritance
#include<iostream>
using namespace std;
class teacher{
    public:
    teacher()
    {
        cout<<"Base(teacher) constructor called."<<endl;
    }
    ~teacher()
    {
        cout<<"Base(teacher) destructor called."<<endl;
    }
};
class student:public teacher{
    public:
    student()
    {
        cout<<"Derived(student) constructor called."<<endl;
    }
    ~student()
    {
        cout<<"Derived(student) destructor called."<<endl;
    }
};
int main()
{
    student a;
}