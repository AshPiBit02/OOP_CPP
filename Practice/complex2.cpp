#include<iostream>
using namespace std;
class complex
{
    private:
    float real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float real,float imag)
    {
        this->real=real;
        this->imag=imag;
    }
    complex(const complex &x)
    {
        real=x.real;
        imag=x.imag;
    }
    complex add(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex c(2.5,9);
    cout<<"Orgianl complex number: ";
    c.display();
    complex c1=c;
    cout<<"Copied complex number: ";
    c1.display();
    complex sum=c.add(c1);
    cout<<"The sum is: ";
    sum.display();
    return 0;
}