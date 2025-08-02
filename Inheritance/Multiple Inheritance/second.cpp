#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
    int emp_id;
    float sal;
    public:
    Employee(int emp_id,float sal)
    {
        this->emp_id=emp_id;
        this->sal=sal;
    }
};
class Writer{
    protected:
    string genre;
    int no_of_books_published;
    public:
    Writer(string genre,int no_of_books_published)
    {
        this->genre=genre;
        this->no_of_books_published=no_of_books_published;
    }
};
class Person:public Employee,public Writer{
    protected:
    string name;
    int age;
    public:
    Person(int emp_id,float sal,string genre,int no_of_books_published,string name,int age):Employee(emp_id,sal),Writer(genre,no_of_books_published)
    {
        this->name=name;
        this->age=age;
    }
    void getInfo()
    {
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Salary: "<<sal<<endl;
        cout<<"Genre: "<<genre<<endl;
        cout<<"No of Books Published: "<<no_of_books_published<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Person p(1331,96500,"Science Friction",21,"Aashish",21);
    p.getInfo();
    return 0;
}