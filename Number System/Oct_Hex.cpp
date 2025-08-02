#include<iostream>
using namespace std;
void OctToHex(int octNum)
{
    int arr[32],j,i=0;
    //octal to bin
    while(octNum>0)
    {
        arr[i]=octNum%10;
        i++;
        octNum/=10;    
    }
    for( j=i-1;j>=0;j--)
    {
          switch(arr[j])
            {
                case 0: cout<<"000";break;
                case 1: cout<<"001";break;
                case 2: cout<<"010";break;
                case 3: cout<<"011";break;
                case 4: cout<<"100";break;
                case 5: cout<<"101";break;
                case 6: cout<<"110";break;
                case 7: cout<<"111";break;
                default: cout<<"Error"; return;
                
            }
    }
}
int main()
{
    OctToHex(765);
    return 0;
}