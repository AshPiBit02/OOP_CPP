//Single Inheritance with Parameterized constructor 
#include<iostream>
#include<string>
using namespace std;
class Mammals{
    protected:
    string Hair;
    string WarmBlood;
    public:
    Mammals(string Hair, string WarmBlood)
    {
        this->Hair = Hair;
        this->WarmBlood = WarmBlood;
    }
    void MammInfo()
    {
        cout<<"Base class Info"<<endl;
        cout<<"Hair: "<<Hair<<endl;
        cout<<"WarmBlood: "<<WarmBlood<<endl;
    }
};
class Human:public Mammals
{
    private:
    int age;
    string glands;
    public:
    Human(string Hair, string WarmBlood, int age, string glands) : Mammals(Hair, WarmBlood)
    {
        this->age = age;
        this->glands = glands;
    }
    void HumanInfo()
    {
        cout<<"Derived class Info"<<endl;
        cout<<"WarmBlood: "<<WarmBlood<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Glands: "<<glands<<endl;
        cout<<"Hair: "<<Hair<<endl;
    }

};
int main()
{
    Human h("Yes","Yes",101,"Yes");
    h.MammInfo();
    cout<<endl;
    h.HumanInfo();
    return 0;
}