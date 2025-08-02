#include<iostream>
#include<string>
using namespace std;
class Driver{
    protected:
    string name;
    int age;
    public:
    Driver(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void displayDriverInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Vehicle{
    protected:
    string vehicleTyp;
    int vehicleNum;
    public:
    Vehicle(string vehicleTyp,int vehicleNum)
    {
        this->vehicleTyp=vehicleTyp;
        this->vehicleNum=vehicleNum;
    }
    void displayVehicleInfo()
    {
        cout<<"Vehicle Type: "<<vehicleTyp<<endl;
        cout<<"Vehicle Number: "<<vehicleNum<<endl;
    }

};
class License:public Vehicle{
    protected:
    int issueYear;
    public:
    License(string vehicleTyp,int vehicleNum,int issueYear):Vehicle(vehicleTyp,vehicleNum)
    {
        this->issueYear=issueYear;
    }
    void displayLicenseInfo()
    {
        displayVehicleInfo();
        if(issueYear<2020)
        {
            cout<<"License is expired."<<endl;
        }
        else
        {
            cout<<"License is valid."<<endl;
        }
    }
};
class DriverLicenseProfile:public Driver,public License{
    public:
    DriverLicenseProfile(string name,int age,string vehicleTyp,int vehicleNum,int issueYear):Driver(name,age),License(vehicleTyp,vehicleNum,issueYear)
    {
    }
    void displayDriverLicenseProfile()
    {
        displayDriverInfo();
        displayLicenseInfo();
    }
};
int main()
{
    DriverLicenseProfile a("Aash",22,"Car",1234,2019);
    a.displayDriverLicenseProfile();
    return 0;
}