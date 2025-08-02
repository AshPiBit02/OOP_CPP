//FacultyProfile class that inherits both Teacher and Department class
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    protected:
    string name;
    int exp;
    public:
    Teacher(string name,int exp)
    {
        this->name=name;
        this->exp=exp;
    }
    void displayTechearInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Experience: "<<exp<<endl;
    }
};
class Department{
    protected:
    string Dept_nm;
    string Dep_head;
    public:
    Department(string Dept_nm,string Dep_head)
    {
        this->Dept_nm=Dept_nm;
        this->Dep_head=Dep_head;
    }
    void displayDepartmentInfo()
    {
        cout<<"Department Name: "<<Dept_nm<<endl;
        cout<<"Department Head: "<<Dep_head<<endl;
    }
};
class FacultyProfile:public Teacher,public Department{
    public:
    FacultyProfile(string name,int exp,string Dept_nm,string Dep_head):Teacher(name,exp),Department(Dept_nm,Dep_head)
    {
    }
    void displayFullProfile()
    {
        cout<<"Department Information"<<endl;
        displayDepartmentInfo();
        cout<<"Teacher Information"<<endl;
        displayTechearInfo();
    }
};
int main()
{
    FacultyProfile fp("Aashish",21,"Computer Science","Dr. Anupam");
    fp.displayFullProfile();
    return 0;
}