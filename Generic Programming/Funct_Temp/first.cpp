#include<iostream>
using  namespace std;
template <class template_name>
template_name add(template_name a,template_name b)
{
    return a+b;
}
int main()
{
    //First method
    cout<<add(2,6)<<endl;
    cout<<add(3.14,7.1)<<endl;
    cout<<add(string("Hello "),string("World!"))<<endl;
    //Second method
    cout<<add<int>(2,6)<<endl;
    cout<<add<float>(3.14,7.1)<<endl;
    cout<<add<string>("Hello ","World!")<<endl;
    //it is not necessary to introduce the data type except for string
    
    return 0;
}
