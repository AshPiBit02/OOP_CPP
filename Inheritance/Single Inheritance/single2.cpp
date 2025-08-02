//Single inheritance with parameterized constructor
#include<iostream>
#include<string>
using namespace std;
class Men
{
    protected:
    string behavior;
    string discipline;
    string maturity;
    public:
    int age;
    void feature()
    {
        cout<<"Features of Men inherited by a Man"<<endl;
    }
};
class Man:public Men
{
    private:
    string responsibility;
    int level;
    int aura;
    public:
    Man(string behavior,string discipline,string maturity,int age,string responsibility,int level,int aura)
    {
        this->behavior=behavior;
        this->discipline=discipline;
        this->maturity=maturity;
        this->age=age;
        this->responsibility=responsibility;
        this->level=level;
        this->aura=aura;
    }
    void getFeature()
    {
        cout<<"Behavior: "<<behavior<<endl;
        cout<<"Discipline: "<<discipline<<endl;
        cout<<"Maturity: "<<maturity<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Responsibility: "<<responsibility<<endl;
        cout<<"Level: "<<level<<endl;
        cout<<"Aura: "<<aura<<endl;
    }
};
int main()
{
    Man M("Conduct","Self-Control","Wisdom",27,"Stewardship",997,9999999);
    M.feature();
    M.getFeature();
    return 0;
}