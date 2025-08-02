#include<iostream>
#include<vector>
using namespace std;
void loop(vector<int>vec)
{
     for(int i:vec)//for each loop
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>vec;
    vec.push_back(10); //push back function 
    vec.push_back(20);
    vec.push_back(30);
    loop(vec);
    cout<<endl;
    cout<<"Size: "<<vec.size()<<endl;
    vec.pop_back();//last index element(30) popped
    loop(vec);
    cout<<"The front element is: "<<vec.front()<<endl;//returns first index element
    cout<<"The back element is: "<<vec.back()<<endl;//returns last index element
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    loop(vec);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<vec.at(2);//returns value at index 2
    cout<<"Common vector functions illustrated";
    return 0;
}