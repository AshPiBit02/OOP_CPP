#include<iostream>
#include<list>
using namespace std;
void display(list<int>&lst)
{
    for(list<int>::iterator it = lst.begin();it!=lst.end();++it)
    {
        cout<<*it<<" ";
    }

}
int main()
{
    list<int>lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(-10);
    lst.push_back(40);
    lst.push_back(90);
    cout<<"Before sorting ";
    display(lst);
    cout<<endl<<"After sorting ";
    lst.sort();
    display(lst);


    return 0;
}