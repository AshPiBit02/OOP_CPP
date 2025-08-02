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
};
class Sports{
    protected:
    string sp_nm;
    int score;
    public:
    Sports(string sp_nm,int score)
    {
        this->sp_nm=sp_nm;
        this->score=score;
    }
};
class Result:public Student,public Sports
{
    public:
    Result(string name,int roll_no,string sp_nm,int score):Student(name,roll_no),Sports(sp_nm,score)
    {
    }
    void DisRes()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ROll_no: "<<roll_no<<endl;
        cout<<"Sports name: "<<sp_nm<<endl;
        cout<<"Score: "<<score<<endl;
    }
    
};
int main()
{
    Result r("Aashish",02,"Football",98);
    r.DisRes();
    return 0;
}