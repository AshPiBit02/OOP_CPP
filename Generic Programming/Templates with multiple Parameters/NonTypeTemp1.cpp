#include<iostream>
using namespace std;
template <class T,int n>
class sample
{
    private: 
    T data[n];
    public:
    void insert()
    {
        for(int i=1;i<=n;i++)
        {
            data[i]=i*10;
        }
        cout<<"Data  inserted successfully"<<endl;
    }
    void display()
    {
        cout<<"Data are ";
        for(int i=1;i<=n;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    sample <int,7>obj1;// 7 is passed as non-type template argument value of n
    obj1.insert();
    obj1.display();
    return 0;
}