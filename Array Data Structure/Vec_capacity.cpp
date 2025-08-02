#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    cout<<"Size: "<<vect.size()<<endl;//3
    cout<<"Capacity: "<<vect.capacity()<<endl;//4
    vect.push_back(40);
    cout<<"Size: "<<vect.size()<<endl;//4
    cout<<"Capacity: "<<vect.capacity()<<endl;//4
    vect.push_back(50);
    cout<<"Size: "<<vect.size()<<endl;//5
    cout<<"Capacity: "<<vect.capacity()<<endl;//8
    //note: If there is no capacity to push a new element in the vector the capacity is doubled automatically
    return 0;
}