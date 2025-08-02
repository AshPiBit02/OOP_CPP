#include<iostream>
using namespace std;
template<class T>
class classNm
{
    public:
    T x,y;
    classNm(T x,T y)
    {
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<"The sum is "<<x+y<<endl;
    }
};
int main()
{
    int x,y;
    float a,b;
    string c,d;
    cout<<"Enter any two values: "<<endl;
    cin>>x>>y;
    classNm obj(x,y);
    obj.display();
    cout<<"Enter any two values: "<<endl;
    cin>>a>>b;
    classNm obj1(a,b);
    obj1.display();
    cout<<"Enter any two values: "<<endl;
    cin>>c>>d;
    classNm <string>obj2(c,d);
    obj2.display();
    return 0;
}