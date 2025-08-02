#include<iostream>
using namespace std;
const int SIZE=7;
class HashTable
{
    private:
    int table[SIZE];
    int hash(int key)
    {
        return key%SIZE;
    }
    public:
    HashTable()
    {
        for(int i=0;i<SIZE;i++)
        {
            table[i]=-1;
        }
    }
    void Insert(int key)
    {
        int index=hash(key);
        int st_index=index;
        int i=1;
        while(table[index]!=-1)
        {
            index=(st_index+(i*i))%SIZE;
            if(index==st_index)
            {
                cout<<"Hash Table is Full"<<endl;
                return;
            }
            i++;
        }
        table[index]=key;
        cout<<key<<" Inserted in Hash Table at Position "<<index+1<<endl;
    }
    void Search(int key)
    {
        int index=hash(key);
        int stIndex=index;
        int i=1;
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Found at Position "<<index+1<<endl;
                return;
            }
            index=(stIndex+(i*i))%SIZE;
            if(index==stIndex)
            {
                break;
            }
            i++;
        }
        cout<<key<<" Not Found!"<<endl;
    }
    void Display()
    {
        cout<<"Index   Elements"<<endl;
        for(int i=0;i<SIZE;i++)
        {
            cout<<i<<"   ->   "<<table[i]<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    HashTable h;
    h.Insert(13);
    h.Insert(33);
    h.Insert(19);
    h.Insert(16);
    h.Insert(10);
    h.Insert(1);
    h.Insert(17);
    h.Insert(18);
    h.Display();
    h.Search(11);
    h.Search(17);
    return 0;


}
