#include<iostream>
using namespace std;
const int tsize= 10;
class HashTable
{
    private:
    int table[tsize];
    int hash(int key)
    {
        return key%tsize;
    }
    public:
    HashTable()
    {
        for(int i=0;i<tsize;i++)
        {
            table[i]=-1;
        }
    }
    void InsertKey(int key)
    {
        int index=hash(key);
        int initIndex=index;
        int i=1;
        while(table[index]!=-1)
        {
            index=(initIndex+(i*i))%10;
            if(index==initIndex)
            {
                cout<<"Hash Table is full!"<<endl;
                return;
            }
            i++;
        }
        table[index]=key;
        cout<<key<<" Inserted in the hash table at position "<<index+1<<endl;
    }
    void display()
    {
        cout<<"\nIndex   Element"<<endl;
        for(int i=0;i<tsize;i++)
        {
            cout<<i<<"   ->   "<<table[i]<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    HashTable h;
    h.InsertKey(12);
    h.InsertKey(22);
    h.InsertKey(13);
    h.display();
}