#include<iostream>
#include<string>
using namespace std;
class GGF{
    protected:
    string religion;
    public:
    GGF(string religion)
    {
        this->religion=religion;
    }
    void GGFInfo()
    {
        cout<<"Religion: "<<religion;
        cout<<endl;
        cout<<endl;
    }
};
class GF:public GGF{
    protected:
    string caste;
    public:
    GF(string religion,string caste):GGF(religion)
    {
        this->caste=caste;
    }
    void GFInfo()
    {
        cout<<"Religion: "<<religion<<endl;
        cout<<"Caste: "<<caste<<endl;
        cout<<endl;
    }
};
class F:public GF{
    protected:
    string tradition;
    public:
    F(string religion,string caste,string tradition):GF(religion,caste)
    {
        this->tradition=tradition;
    }
    void FInfo()
    {
        cout<<"Religion: "<<religion<<endl;
        cout<<"Caste: "<<caste<<endl;
        cout<<"Tradition: "<<tradition<<endl;
        cout<<endl;
    }
};
class S:public F{
    protected:
    string behavior;
    public:
    S(string religion,string caste,string tradition,string behavior):F(religion,caste,tradition)
    {
        this->behavior=behavior;
    }
    void SInfo()
    {
        cout<<"Religion: "<<religion<<endl;
        cout<<"Caste: "<<caste<<endl;
        cout<<"Tradition: "<<tradition<<endl;
        cout<<"Behavior: "<<behavior<<endl;
        cout<<endl;
    }
};
int main()
{
    S s("Hindu","Tharu","Custom","Good");
    s.GGFInfo();
    s.GFInfo();
    s.FInfo();
    s.SInfo();
    return 0;
}
