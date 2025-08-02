// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=i+1;j>=1;j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=1;
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<=i;j++)
//     {
//         cout<<x<<" ";
//         x++;
//     }
//     cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
    
//     for(int i=0;i<4;i++)
//     {
//         char ch='A'+i;
//         for(int j=0;j<=i;j++)
//         {
//             cout<<(char)(ch-j)<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;

    }
    return 0;
}