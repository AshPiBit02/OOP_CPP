#include<iostream>
using namespace std;
class alpha
{
    public:
    int x;
    alpha(int x)
    {
        this->x=x;
    }
    void showa()
    {
        cout<<"x : "<<x<<endl;
    }
};
class beta:public alpha
{
    public:
    int z,y;

    beta(int x,int y,int z): alpha(x)
    {
        this->y=y;
        this->z=z;

    }
    void showb()
    {
        cout<<"x : "<<x<<"\t"<<"y : "<<y<<"\t"<<"z : "<<z<<endl;
    }
};
class gamma:public beta
{
    public:
    int m,n;
    gamma(int x,int y,int z,int m,int n):beta(x,y,z)
    {
        this->m=m;
        this->n=n;
    }
    void showg()
    {
        cout<<"x : "<<x<<"\t"<<"y : "<<y<<"\t"<<"z : "<<z<<"\t"<<"m : "<<m<<"\t"<<"n : "<<n<<endl;
    }
};
int main()
{
    alpha a(10);
    a.showa();
    beta b(20,30,40);
    b.showb();
    gamma g(50,60,70,80,90);
    g.showg();
    return 0;


}