#include<iostream>
using namespace std;
int facto(int x){
    int fact=1,i=1;
    while(i<=x)
    {
        fact*=i;
        i++;
    }
    return fact;
}

int main()
{
    int n,r;
    double ans1,ans2;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter term number r:";
    cin>>r;
    ans1=(double)facto(n)/(double)(facto(r)*(double)facto(n-r));
    ans2=(double)facto(n)/(double)facto(n-r);
    cout<<"The value of "<<"C("<<n<<','<<r<<") is "<<ans1<<endl;
    cout<<"The value of "<<"P("<<n<<','<<r<<") is "<<ans2<<endl;
    return 0;

}