#include<iostream>
using namespace std;
class Car
{
    public:
    void displayInfo()
    {
        cout<<"Model:1969"<<endl<<"Brand:BMW"<<endl;
    }
};
int main()
{
    Car c;
    Car* ptr=&c;//ptr is the object pointer of the object c
    ptr->displayInfo();
    return 0;
}