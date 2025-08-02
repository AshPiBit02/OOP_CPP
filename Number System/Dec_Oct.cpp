#include<iostream>
using namespace std;
void OctDec(int oct)
{
    int rem,sum=0,pow=1;
    while(oct>0)
    {
        rem=oct%10;
        sum+=(rem*pow);
        oct/=10;
        pow*=8;
    }
    cout<<sum<<" is equivalent Decimal number."<<endl;
}
void DecOct(int dec)
{
    int arr[32],i=0;
    while(dec>0)
    {
        arr[i]=dec%8;
        dec/=8;
        i++;
    }
      for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
    cout <<" is equivalent Octal number."<<endl;
}
int main()
{
    int choice,num;
    cout<<"Enter:"<<endl;
    cout<<"1.For Octal to equivalent Decimal conversion"<<endl<<"2.For Decimal to equivalent Octal conversion."<<endl;
    cout<<"Your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter Octal number for conversion:";
        cin>>num;
        OctDec(num);
        break;
        case 2:
        cout<<"Enter Decimal number for conversion:";
        cin>>num;
        DecOct(num);
        break;
        default:
        cout<<"Invalid choice!"<<endl;
        return 0;
    }
    return 0;
}