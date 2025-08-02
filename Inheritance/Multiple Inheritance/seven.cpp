#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    string name;
    int roll_no;
    public:
    Student(string name,int roll_no)
    {
        this->name=name;
        this->roll_no=roll_no;
    }
    void displayStudentInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll_no: "<<roll_no<<endl;
    }
};
class Marks{
    protected:
    float s1,s2,s3;
    Marks(float s1,float s2,float s3)
    {
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
    }
    void displayMarksInfo()
    {
        cout<<"Marks: "<<s1<<" "<<s2<<" "<<s3<<endl;
    }
};
class Grade:public Marks{
    protected:
    char grade;
    public:
    Grade(float s1,float s2,float s3):Marks(s1,s2,s3)
    {
        float avg = (s1 + s2 + s3) / 300.0;
        if(avg >= 0.9)
            grade = 'A';
        else if(avg >= 0.8)
            grade = 'B';
        else if(avg >= 0.7)
            grade = 'C';
        else if(avg >= 0.6)
            grade = 'D';
        else
            grade = 'F';
    }
    void displayGradeInfo()
    {
        cout<<"Grade: "<<grade<<endl;
    }
};
class ReportCard:public Student, public Grade{
    public:
    ReportCard(string name,int roll_no,float s1,float s2,float s3):Student(name,roll_no),Grade(s1,s2,s3)
    {
    }
    void displayReportCard()
    {
        displayStudentInfo();
        displayMarksInfo();
        displayGradeInfo();
    }
};
int main()
{
    ReportCard result("Aash",02,85,78,92);
    result.displayReportCard();
    return 0;
}