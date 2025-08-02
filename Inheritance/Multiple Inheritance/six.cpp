//Person + Job + Address -> EmployeeProfile
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void displayPersonalInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Job{
    protected:
    string job_tit;
    float sal;
    public:
    Job(string job_tit,float sal)
    {
        this->job_tit=job_tit;
        this->sal=sal;
    }
    void displayJobInfo()
    {
        cout<<"Job Title: "<<job_tit<<endl;
        cout<<"Salary: $"<<sal<<endl;
    }
};
class Address{
    protected:
    string city;
    string country;
    Address(string city,string country)
    {
        this->city=city;
        this->country=country;
    }
    void displayAddressInfo()
    {
        cout<<"City: "<<city<<endl;
        cout<<"Country: "<<country<<endl;
    }
};
class EmployeeProfile:public Person,public Job,public Address
{
    public:
    EmployeeProfile(string name,int age,string job_tit,float sal,string city,string country):Person(name,age),Job(job_tit,sal),Address(city,country)
    {

    }
    void displayFullProfile()
    {
        displayPersonalInfo();
        displayJobInfo();
        displayAddressInfo();
    }
};
int main()
{
    EmployeeProfile E("Aash",20,"Data Scientist",500000,"Chandrapur","NPL");
    E.displayFullProfile();
    return 0;
}