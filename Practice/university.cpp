#include<iostream>
#include<string>
using namespace std;
class University
{
    public:
    string Name;
    string Location;
    University()
    {
        Name="Unknown";
        Location="Unknown";
    }
    void setUniversityInfo()
    {
        cout<<"Enter name of University: ";
        cin>>Name;
        cout<<"Enter University locatioin: ";
        cin>>Location;
    }
    virtual void displayUniv()
    {
        cout<<"Name of University: "<<Name<<endl<<Name<<"\tLocation: "<<Location<<endl;
    }
};
class Affiliated_college:public University
{
    public:
    string Name;
    string Address;
    int No_of_Programs;
    Affiliated_college()
    {
        Name="Unknown";
        Address="Unknown";
        No_of_Programs=0;
    }
    void setAffiliatedInfo()
    {
        cout<<"Enter name of Affiliated College: ";
        cin>>Name;
        cout<<"Enter address of the college: ";
        cin>>Address;
        cout<<"Enter number of programs availiable: ";
        cin>>No_of_Programs;
    }
    void displayAffiliatedInfo()
    {
        displayUniv();
        cout<<"Name of Affiliated College: "<<Name<<endl;
        cout<<"Address of Affiliated College: "<<Address<<endl;
        cout<<"Number of Availiable Programs: "<<No_of_Programs<<endl;
    }

};
class Constituent_college:public University
{
    public:
    string School;
    string Dean;
    string Name_of_program;
    Constituent_college()
    {
        School="Unknown";
        Dean="Unknown";
        Name_of_program="Unknown";
    }
    void setConstituentInfo()
    {
        cout<<"Enter name of school: ";
        cin>>School;
        cout<<"Enter name of Dean: ";
        cin>>Dean;
        cout<<"Enter name of program: ";
        cin>>Name_of_program;
    }
    void displayConstituentInfo()
    {
        displayUniv();
        cout<<"Name of School: "<<School<<endl;
        cout<<"Name of Dean: "<<Dean<<endl;
        cout<<"Name of Program: "<<Name_of_program<<endl;

    }
};
class Student:public Affiliated_college,public Constituent_college
{

    public:
    string Name;
    string Program;
    int enrolledYear;
    Student()
    {
        Name="Unknown";
        Program="Unknown";
        enrolledYear=0;
    }
    void setStudentInfo()
    {
        cout<<"Enter name of student: ";
        cin>>Name;
        cout<<"Enter Program: ";
        cin>>Program;
        cout<<"Enter Enrolled Year: ";
        cin>>enrolledYear;
    }
    void displayStudentInfo()
    {
        displayAffiliatedInfo();
        displayConstituentInfo();
        cout<<"Name of Student: "<<Name<<endl;
        cout<<"Program: "<<Program<<endl;
        cout<<"Enrolled Year: "<<enrolledYear;
    }
};
int main()
{
University uni;
uni.setUniversityInfo();
Affiliated_college af;
af.setAffiliatedInfo();
Constituent_college co;
co.setConstituentInfo();
Student s;
s.setStudentInfo();
cout<<endl;
s.displayStudentInfo();
}