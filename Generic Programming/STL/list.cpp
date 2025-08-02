#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string>l;
    l.push_front("Black");
    l.push_back("Gaaaaa");
    l.push_front("Atom");
    l.sort();
    while(!l.empty())
    {
        cout<<l.front()<<" ";
        l.pop_front();
    }
    return 0;
}