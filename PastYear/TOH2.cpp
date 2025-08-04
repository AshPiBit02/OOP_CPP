#include<iostream>
using namespace std;
int count=1;
void display(int n,char source,char destination)
{
    cout<<count<<" Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    count++;
}
void TOH(int n,char source ,char auxiliary,char destination)
{
    if(n==1)
    {
        display(n,source,destination);
        return ;
    }
    TOH(n-1,source,destination,auxiliary);
    display(n,source,destination);
    TOH(n-1,auxiliary,source,destination);
}
int main()
{
    int numdisk;
    cout<<"Enter number of Disks: ";
    cin>>numdisk;
    TOH(numdisk,'A','B','C');//A is source, B is Auxiliary and C is Destination
    return 0;
}