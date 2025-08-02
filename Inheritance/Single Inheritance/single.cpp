#include<iostream>
#include<string>
using namespace std;
class Human{
    protected:
    string gender;
    int age;
};
class Teacher:public Human
{
    public:
    int id;
    string dept;
    void getInfo()
    {
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};
int main()
{
    Teacher T;
    T.gender="Male";
    T.age=27;
    T.id=103;
    T.dept="Computer Science";
    T.getInfo();
    return 0;
}
