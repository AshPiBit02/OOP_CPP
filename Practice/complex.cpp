#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(float real,float imag)
    {
        this->real=real;
        this->imag=imag;
    }
    Complex(const Complex &X)
    {
        real=X.real;
        imag=X.imag;
    }
    Complex add(Complex X)
    {
        Complex temp;
        temp.real=real+X.real;
        temp.imag=imag+X.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<" i"<<endl;
    }
};
int main()
{
    Complex c1(3,5);
    cout<<"First complex number is : ";
    c1.display();
    Complex c2=c1;
    cout<<"Copied complex number is : ";
    c2.display();
    Complex sum=c1.add(c2);
    cout<<"Sum of the Complex numbers is : ";
    sum.display();
    return 0;
    
}