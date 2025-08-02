// Fibonacci value 
// #include<iostream>
// using namespace std;

// int fibo(int n)
// {
//     int x = 0, y = 1, nn;
//     if(n == 1) return x;
//     if(n == 2) return y;
//     for(int i = 3; i <= n; i++)
//     {
//         nn = x + y;
//         x = y;
//         y = nn;
//     }
//     return y;
// }

// int main()
// {
//     cout << fibo(10);
//     return 0;
// }

#include<iostream>
using namespace std;

void fibo(int n)
{
    int x = 0, y = 1, nn;
    for(int i = 1; i <= n; i++)
    {
        if(i==1)
        cout<<x<<" ";
        else if(i==2)
        cout<<y<<" ";
        else{
        nn = x + y;
        x = y;
        y = nn;
        cout<<y<<" ";
        }
    }
    // return y;
}

int main()
{
    int n;
    cout<<"Enter required Fibonacci terms:";
    cin>>n;
    fibo(n);
    return 0;
}