#include<iostream>
#include<cmath>
using namespace std;

void DecToBin(int decNum)
{
    int arr[32];
    int i = 0;
    if(decNum == 0)
    {
        cout << "0" << endl;
        return;
    }
     while (decNum != 0)
    {
        arr[i] = decNum % 2;
        decNum = decNum / 2;
        i++;
    }
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
    cout << endl;
}
void BinToDec(int binNum) {
    int rem,num;
    int n=0,ans=0;
    while(binNum!=0)
    {
        rem=binNum%10;
        num=rem*pow(2,n);
        n++;
        binNum=binNum/10;
        ans+=num;
    }
    cout<<ans<<endl;
}

int main()
{
    DecToBin(-16);
    BinToDec(-1111);
    return 0;
}