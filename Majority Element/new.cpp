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
    void displayPersonInfo()
    {
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Doctor{
    protected:
    string doc_nm;
    string spec;
    Doctor(string doc_nm,string spec)
    {
        this->doc_nm=doc_nm;
        this->spec=spec;
    }
    void displayDoctorInfo()
    {
        cout<<"Doctor Name: Dr."<<doc_nm<<endl;
        cout<<"Specialization: "<<spec<<endl;
    }
};
class Patient:public Person
{
    protected:
    string patientID,illness;
    Patient(string name,int age,string patientID,string illness):Person(name,age)
    {
        this->patientID=patientID;
        this->illness=illness;
    }
    void displayPatientInfo()
    {
        cout<<"Patient ID: "<<patientID<<endl;
        cout<<"Illness: "<<illness<<endl;
    }
};
class Treatment:public Doctor
{
    protected:
    float treat_cost;
    int days_admit;
    Treatment(string doc_nm,string spec,float treat_cost,int days_admit):Doctor(doc_nm,spec)
    {
        this->treat_cost=treat_cost;
        this->days_admit=days_admit;
    }
    void calculateBill()
    {
        cout<<"Bill Amount: $"<<treat_cost*days_admit;
    }
};
class MedicalRecord:public Patient,public Treatment
{
    public:
    MedicalRecord(string name,int age,string doc_nm,string spec,string patientID,string illness,float treat_cost,int days_admit):Patient(name,age,patientID,illness),Treatment(doc_nm,spec,treat_cost,days_admit)
    {

    }
    void displayFullRecord()
    {
        displayPersonInfo();
        displayPatientInfo();
        displayDoctorInfo();
        calculateBill();
    }
};
int main()
{
    MedicalRecord P1("Alice",49,"C123","Pnewmonia","Black","Pulmonologist",2500,9);
    P1.displayFullRecord();
    return 0;
}