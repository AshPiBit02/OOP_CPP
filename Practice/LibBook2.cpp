#include<iostream>
#include<string>
using namespace std;
class LibraryBook
{
    public:
    string title,author;
    bool borrowed;
    LibraryBook(string title,string author)
    {
        this->title=title;
        this->author=author;
        borrowed=false;
    }
    void borrowers()
    {
        if(!borrowed)
        {
            borrowed=true;
            cout<<"Book Borrowed Successfully"<<endl;
        }
        else
        {
            cout<<"Book already Borrowed"<<endl;
        }
    }
    void displayStatus()
    {
        cout<<"Title: "<<title<<endl<<"Author: "<<author<<endl;
        cout<<"Borrowed: "<<(borrowed?"Yes":"No")<<endl;
    }
};
int main()
{
    LibraryBook lb("Dark","Light");
    lb.displayStatus();
    lb.borrowers();
    LibraryBook lb2("Grey","Black");
    lb2.displayStatus();
    return 0;
    
    
}