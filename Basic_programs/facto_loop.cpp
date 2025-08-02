// //factorail using for loops
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,fact=1;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     if(n<0)
//     {
//         cout<<"The factorail is 0."<<endl;

//     }
//     else if(n==0)
//     {
//         cout<<"The factorial is 1."<<endl;
//     }
//     else{
//         for(i=1;i<=n;i++)
//         {
//             fact=fact*i;
//         }
//         cout<<"The factorail of "<<n<<" is "<<fact<<endl;
//     }
//     return 0;
    
// }


// //Factorail using while loops
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,fact=1;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     if(n<0)
//     {
//         cout<<"The factorial is 0"<<endl;
//     }
//     else if(n==0)
//     {
//         cout<<"The factorail is 1"<<endl;
//     }
//     else
//     {
//     while(i<=n)
//     {
//         fact=fact*i;
//         i++;
//     }
//     cout<<"The factorial of "<<n<<" is "<<fact<<endl;
//     }
// return 0;
// }

// Factorail using do while loops
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n==0)
    {
        cout<<"The factorail is 1."<<endl;
    }
    else if(n<0)
    {
        cout<<"The factorail is 0."<<endl;
    }
    else
    {
        do{
            fact=fact*i;
            i++;
        }while(i<=n);
        cout<<"The factorail of "<<n<<" is "<<fact<<endl;
    }
    return 0;
}