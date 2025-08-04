#include<iostream>
using namespace std;
void TOH(int n,char source,char auxiliary,char destination)
{
    if(n==1)
    {
        cout<<" Move Disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }
    TOH(n-1,source,destination,auxiliary);
    cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    TOH(n-1,auxiliary,source,destination);
}
int main()
{
    int numDisks;
    cout<<"Enter number of Disks: ";
    cin>>numDisks;
    TOH(numDisks,'A','B','C');
    return 0;
}