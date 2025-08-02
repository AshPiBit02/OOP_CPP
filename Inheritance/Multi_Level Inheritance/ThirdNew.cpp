#include<iostream>
#include<string>
using namespace std;
class Country{
    protected:
    string country;
    public:
    Country(string country)
    {
        this->country=country;
    }
};
class Region:public Country{
    protected:
    string region;
    public:
    Region(string country, string region):Country(country)
    {
        this->region=region;
    }
};
class Province:public Region{
    protected:
    int province;
    public:
    Province(string country, string region, int province):Region(country, region)
    {
        this->province=province;
    }
};
class City:public Province{
    protected:
    string city;
    public:
    City(string country, string region, int province, string city):Province(country, region, province)
    {
        this->city=city;
    }
    void getcit()
    {
        cout<<"Country: "<<country<<endl;
        cout<<"Region: "<<region<<endl;
        cout<<"Province: "<<province<<endl;
        cout<<"City: "<<city<<endl;
    }
};
int main()
{
    City c("Nepal", "Terai", 2, "Chandrapur");
    c.getcit();
    return 0;
}
