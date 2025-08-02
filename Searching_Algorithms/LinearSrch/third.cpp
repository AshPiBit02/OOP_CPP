//Linear search in sorted array using vector instead of array
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]>vec[j])
            {
                int temp;
                temp=vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
        }
    }
}
void LinearSrch(vector<int>&vec,int n,int key)
{
    sort(vec,n);
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==key)
        {
            cout<<key<<" Found at position "<<i+1<<endl;
            pos++;
        }

    }
    if(pos==-1)
    {
        cout<<key<<" doesn't exist in the vector!"<<endl;
    }
}
int main()
{
    vector<int>vec={23,-88,26,98,110,2,3,789,15,64,4,15};
    int n=vec.size();
    int key;
    sort(vec,n);
    cout<<"Enter the key value to be searched: ";
    cin>>key;
    LinearSrch(vec,n,key);
    return 0;

}