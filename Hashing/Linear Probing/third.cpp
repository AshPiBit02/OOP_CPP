#include<iostream>
using namespace std;
const int Table_Size=10;
class HashTable
{
    private:
    int table[Table_Size];
    int hash(int key)
    {
        return key%Table_Size;
    }
    public:
    HashTable()
    {
        for(int i=0;i<Table_Size;i++)
        {
            table[i]=-1;
        }
    }
    void InsertKey(int key)
    {
        int index=hash(key);
        int startIndex=index;
        while(table[index]!=-1)
        {
            index=(index+1)%Table_Size;
            if(startIndex==index)
            {
                cout<<"Hash Table is Full "<<key<<" can't be inserted!"<<endl;
                return;
            }
        }
        table[index]=key;
        cout<<key<<" Key inserted successfully at position "<<index+1<<endl;
    }
    void SrchKey(int key)
    {
        int index=hash(key);
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Key found at position "<<index+1<<endl;
                return;
            }
            index=(index+1)%Table_Size;
        }
        cout<<key<<" Key not found!"<<endl;
    }
    void Display()
    {
        for(int i=0;i<Table_Size;i++)
        {
            if(table[i]!=-1)
            {
                cout<<"  --------"<<endl;
                cout<<" | "<<i<<" | "<<table[i]<<" | "<<endl;
            }
            else
            {
                cout<<"  --------"<<endl;
                cout<<" | "<<i<<" | "<<" - "<<" | "<<endl;
            }
        }
    }
};
int main()
{
    HashTable hash;
    hash.InsertKey(101);
    hash.InsertKey(99);
    hash.InsertKey(32);
    hash.InsertKey(47);
    hash.InsertKey(11);
    hash.InsertKey(23);
    hash.InsertKey(58);
    hash.InsertKey(66);
    hash.Display();
    hash.SrchKey(11);
    hash.SrchKey(13);
    hash.SrchKey(99);
    return 0;
}