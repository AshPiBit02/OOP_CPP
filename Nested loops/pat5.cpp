// // Inverted triangles
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=4;j++){
//             if(i>j)
//             {
//                 cout<<" "<<" ";
//             }
//             else
//             {
//                 cout<<i<<" ";
//             }

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
   
    for(int i=1;i<=4;i++)
    {
         
        for(int j=1;j<=4;j++){
            if(i>j)
            {
                cout<<" "<<" ";
            }
            else
            {
                cout<<ch<<" ";
                
            }

        }
        ch++;
        cout<<endl;
    }
    return 0;
}