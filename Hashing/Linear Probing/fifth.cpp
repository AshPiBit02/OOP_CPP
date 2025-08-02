//In this program there is one small flow which is that the element that is inserted in the table after resolution, if the previous element is delected the search function cannot find the other key that is inserted after resolution 
#include<iostream>
using namespace std;
const int Table_Size = 11;
class HashTable
{
    private:
    int table[Table_Size];
    int hash(int key)
    {
        return key % Table_Size;
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
                cout<<key<<" can't be inserted. "<<"Hash Table is full!"<<endl;
                return;
            }
        }
        table[index]=key;
        cout<<key<<" Key Inserted Successfully"<<endl;
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
        cout<<key<<" Key doesn't exist in the Hash Table!"<<endl;
    }
    void DelKeyP(int pos)
    {
        if(table[pos]==-1)
        {
            return;
        }
        int temp=table[pos-1];
        table[pos-1]=-1;
        cout<<temp<<" Key Delected from the position "<<pos<<endl;
    }
    void DelKeyK(int key)
    {
        int index=hash(key);
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                table[index]=-1;
                cout<<key<<" Key Delected that was at position "<<index+1<<endl;
                return;
            }
            index=(index+1)%Table_Size;
        }
        cout<<key<<" Key doesn't exits in the Hash Table!"<<endl;
    }
    void Display()
    {
        cout<<"Hash Table:"<<endl;
        for(int i=0;i<Table_Size;i++)
        {
            if(table[i]!=-1)
            {
                cout<<"--------"<<endl;
                cout<<"| "<<i<<" | "<<table[i]<<" |"<<endl;
            }
            else
            {
                cout<<"--------"<<endl;
                cout<<"| "<<i<<" | - |"<<endl;
            }
        }
        cout<<"--------"<<endl;
    }
};
int main()
{
    HashTable hash;
    hash.InsertKey(55);
    hash.InsertKey(59);
    hash.InsertKey(98);
    hash.InsertKey(13);
    hash.InsertKey(27);
    hash.InsertKey(53);
    hash.InsertKey(68);
    hash.InsertKey(96);
    hash.InsertKey(29);
    hash.InsertKey(89);
    hash.InsertKey(11);
    hash.InsertKey(19);
    hash.InsertKey(91);
    hash.InsertKey(83);
    hash.InsertKey(69);
    hash.InsertKey(100);
    hash.Display();
    // hash.DelKeyP(1);
    // hash.Display();
    hash.DelKeyK(98);
    hash.Display();
    hash.SrchKey(98);
    hash.DelKeyK(11);
    hash.Display();
    return 0;
}