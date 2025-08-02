#include<iostream>
using namespace std;
class SimpleInterest
{
    private:
    float principle,time,rate;
    public:
    SimpleInterest(float principle,float time)
    {
        this->principle=principle;
        this->time=time;
        rate=8;
    }
    void CalInterest()
    {
        float amount=(principle*time*rate)/100;
        cout<<"The simple interest of Rs."<<principle<<" for "<<time<<" years at defaul interest of 8% is Rs."<<amount<<endl;
    }

};
int main()
{
    SimpleInterest customer1(50000,1.5);
    SimpleInterest customer2(6000,5.6);
    SimpleInterest customer3(23666,5);
    cout<<"For Customer1:"<<endl;
    customer1.CalInterest();
    cout<<"For Customer2:"<<endl;
    customer2.CalInterest();
    cout<<"For Customer3:"<<endl;
    customer3.CalInterest();
    return 0;
}