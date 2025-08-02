#include<iostream>
using namespace std;
const int Table_Size=11;
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
    void Insertkey(int key)
    {
        int index=hash(key);
        int startIndex=index;
        while(table[index]!=-1)
        {
            index=(index+1) % Table_Size;
            if(startIndex==index)
            {
                cout<<"Hash Table is Full "<<key<<" can't be Inserted!"<<endl;
                return;
            }
        }
        table[index]=key;
        cout<<key<<" Key is inserted at index "<<index<<endl;
    }
    void SrchKey(int key)
    {
        int index=hash(key);
        int startIndex=index;
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Key found at index "<<index<<endl;
                return;
            }
            index=(index+1)%Table_Size;
            if(index==startIndex)
            {
                cout<<key<<" Key Not Found!"<<endl;

            }

        }
        cout<<key<<" Key not found!"<<endl;
    }
    void DltKey(int key)
    {
        int index=hash(key);
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                table[index]=-1;
                cout<<key<<" Key Delected Successfully which was at index "<<index<<endl;
                return;
            }
            index=(index+1)%Table_Size;

        }
        cout<<key<<" Key doesn't exist in the Hash Table!"<<endl;
    }
    void display()
    {
        cout<<"HASH TABLE:"<<endl;
        for(int i=0;i<Table_Size;i++)
        {
            if(table[i]!=-1)
            {
                cout<<"---------"<<endl;
                cout<<"| "<<i<<" | "<<table[i]<<" | "<<endl;
            }
            else
            {
                cout<<"---------"<<endl;
                cout<<"| "<<i<<" | "<<" - "<<" | "<<endl;
            }
        }
        cout<<"---------"<<endl;
    }
};
int main()
{
    HashTable hash;
    hash.Insertkey(56);
    hash.Insertkey(54);
    hash.Insertkey(87);
    hash.Insertkey(50);
    hash.Insertkey(23);
    hash.Insertkey(72);
    hash.Insertkey(23);
    hash.Insertkey(23);
    hash.Insertkey(36);
    hash.Insertkey(11);
    hash.Insertkey(77);
    hash.Insertkey(49);
    hash.display();
    hash.SrchKey(11);
    hash.DltKey(56);
    hash.display();
    return 0;
    
}