#include<iostream>
using namespace std;
template<class T>
class Scalar
{
    T a,b,c;
    public:
    Scalar(){}
    Scalar(T a,T b,T c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    Scalar operator * (Scalar p)
    {
        Scalar temp;
        temp.a=a*p.a;
        temp.b=b*p.b;
        temp.c=c*p.c;
        return temp;
    }
    void display()
    {

        cout<<"The scalar product of the vectors is "<<a+b+c<<endl;
    }
};
int main()
{
    Scalar <int> s1(1,2,4),s2(2,2,2),s3;
    s3=s1 * s2;
    s3.display();
    Scalar <float> S1(2.2,3.9,9.1),S2(1.1,3.2,5.03),s4;
    s4=S1*S2;
    s4.display();
    return 0; 
}