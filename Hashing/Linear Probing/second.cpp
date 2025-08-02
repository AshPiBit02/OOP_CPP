#include<iostream>
using namespace std;
const int Table_Size = 7;
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
            if(index==startIndex)
            {
                cout<<"Hash Table is Full! (Further keys will not be inserted)"<<endl;
                return;
            }
        }
        table[index]=key;
        cout<<key<<" Inserted"<<endl;
    }
    void SrchKey(int key)
    {
        int index=hash(key);
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Key is found at position "<<index+1<<endl;
                return;
            }
            index=(index+1)%Table_Size;
        }
        cout<<key<<" Not found!"<<endl;
    }
    void Display()
    {
        cout<<"HASH TABLE:"<<endl;
        for(int i=0;i<Table_Size;i++)
        {
           if(table[i]!=-1)
           {
             cout<<" ----------"<<endl;
            cout<<" | "<<i<<" | "<<table[i]<<" | "<<endl;
           }
           else
           {
             cout<<" ----------"<<endl;
            cout<<" | "<<i<<" | "<<" - "<<" | "<<endl;
           }
        }
    }
};
int main()
{
    HashTable hash;
    hash.InsertKey(10);
    hash.InsertKey(89);
    hash.InsertKey(38);
    hash.InsertKey(98);
    hash.InsertKey(23);
    hash.InsertKey(99);
    hash.InsertKey(28);
    hash.InsertKey(79);
    hash.InsertKey(82);
    hash.InsertKey(23);
    hash.Display();
    hash.SrchKey(99);
    return 0;

}