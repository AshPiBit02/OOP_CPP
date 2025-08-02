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
    void borrowBook()
    {
        if(!borrowed)
        {
            borrowed=true;
            cout<<"Book borrowed Successfully"<<endl;
        }
        else
        {
            cout<<"Book is already borrowed!"<<endl;

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
    LibraryBook lb("Han Zimmer","In To The Wild");
    lb.displayStatus();
    lb.borrowBook();
    lb.borrowBook();
}
