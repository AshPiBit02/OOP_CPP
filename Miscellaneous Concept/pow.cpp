// //To check if a number is power of 2 or not
#include<iostream>
using namespace std;
void check(int num)
{
    int pow=2;
    while(num/pow>0)
    {
        if(num==pow)
        {
            cout<<"Yes"<<endl;
            return;
        }
        pow*=2;
    }
    cout<<"No"<<endl;
    
}
int main()
{
    check(2048);
    return 0;
}


