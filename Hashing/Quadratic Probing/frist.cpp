#include<iostream>
using namespace std;
const int Table_size=7;
class HashTable
{
    private:
    int table[Table_size];
    int hash(int key)
    {
        return key%Table_size;
    }
    public:
    HashTable()
    {
        for(int i=0;i<Table_size;i++)
        {
            table[i]=-1;
        }
    }
    void InsertKey(int key)
    {
        int index=hash(key);
        int startIndex=index;
        int i=1;
        while(table[index]!=-1)
        {
            index=(startIndex+(i*i))%Table_size;
            if(index==startIndex)
            {
                cout<<key<<" Key can't be inserted as hash table is full!"<<endl;
                return;
            }
            i++;
        }
        table[index]=key;
        cout<<key<<" Key Inserted Successfully at Position "<<index+1<<endl;
    }
    void SrchEle(int key)
    {
        int index=hash(key);
        int startIndex=index;
        int i=1;
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Key found at position "<<index+1<<endl;
                return;
            }
            index=(startIndex+(i*i))%Table_size;
            if(index==startIndex)
            {
                break;
            }
            i++;
        }
        cout<<key<<" Key doesn't exits in the hash table!"<<endl;

    }
    void display()
    {
    cout<<"Hash Table"<<endl;
    for(int i=0;i<Table_size;i++)
    {
        cout<<"----------"<<endl;
        if(table[i]==-1)
        {
            cout<<"| "<<i<<" | - |"<<endl;
        }
        else
        {
            cout<<"| "<<i<<" | "<<table[i]<<" |"<<endl;
        }
        cout<<"----------"<<endl;
    }
    cout<<endl;
    }
};
int main()
{
    HashTable hash;
    hash.InsertKey(15);
    hash.InsertKey(11);
    hash.InsertKey(19);
    hash.display();
    hash.SrchEle(13);
    hash.SrchEle(10);
    hash.display();
    hash.InsertKey(22);
    hash.InsertKey(23);
    hash.InsertKey(30);
    hash.InsertKey(14);
    hash.display();
    hash.SrchEle(20);

    return 0;
}