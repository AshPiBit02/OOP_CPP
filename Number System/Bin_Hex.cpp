#include<iostream>

using namespace std;

void BinToHex(int BinNum)
{
    // Step 1: Convert binary to remimal
   int rem,sum=0,pow=1;
   while(BinNum>0)
   {
    rem=BinNum%10;
    sum+=(rem*pow);
    pow*=2;
    BinNum/=10;
   }
     // Step 2: Convert remimal to hexaremimal
    char hex[32];
    int i = 0;
    if (sum == 0) {
        cout << "0" << endl;
        return;
    }
    while (sum > 0) {
        int rem = sum % 16;
        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        sum /= 16;
        i++;
    }
    // Print in reverse
    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];
    cout << endl;
}
void HexToBin(char hexNum[32])
{
    int i = 0;
    cout << "Binary: ";
    while (hexNum[i] != '\0')
    {
        switch (toupper(hexNum[i]))
        {
            case '0': cout << "0000"; break;
            case '1': cout << "0001"; break;
            case '2': cout << "0010"; break;
            case '3': cout << "0011"; break;
            case '4': cout << "0100"; break;
            case '5': cout << "0101"; break;
            case '6': cout << "0110"; break;
            case '7': cout << "0111"; break;
            case '8': cout << "1000"; break;
            case '9': cout << "1001"; break;
            case 'A': cout << "1010"; break;
            case 'B': cout << "1011"; break;
            case 'C': cout << "1100"; break;
            case 'D': cout << "1101"; break;
            case 'E': cout << "1110"; break;
            case 'F': cout << "1111"; break;
            default: cout << "????"; // Invalid hex digit
        }
        i++;
    }
    cout << endl;
}

int main()
{
    BinToHex(1010);
    HexToBin("FF");
    return 0;
}