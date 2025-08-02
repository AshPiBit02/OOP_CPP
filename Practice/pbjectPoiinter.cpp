#include<iostream>
using namespace std;
class Bike
{
    public:
    void info()
    {
        cout<<"MY bike is a Superbike"<<endl;
    }
};
int main()
{
    Bike b;
    Bike* ptr=&b;
    ptr->info();
    return 0;
}