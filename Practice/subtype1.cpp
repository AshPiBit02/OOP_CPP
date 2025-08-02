#include<iostream>
using namespace std;
class City
{
    public:
    virtual void living()
    {
        cout<<"Living in city"<<endl;
    }
};
class Colony:public City{//derived classed are subtype
    public:
    void living() override
    {
        cout<<"Living in Colony"<<endl;
    }
};
class Apartment: public City
{
    public:
    void living() override{
        cout<<"Living in Apartment"<<endl;
    }
};
void migrate(City* c)
{
    c->living();
}
int main()
{
    Colony c;
    Apartment a;
    migrate(&c);// colony is-a place in city
    migrate(&a);//apartment is-a place in city
    return 0;
}