#include<iostream>
using namespace std;
const int Deleted=-2;
const int Empty=-1;
const int tsize=10;
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
            table[i]=Empty;//-1 represent the index is empty
        }
    }
    void insert(int key)
    {
        int index=hash(key);
        int st_index=index;
        int i=1;
        while (table[index]!=-1)
        {
            index=(st_index+i)%tsize;
            if(index==st_index)
            {
                cout<<"Hash Table is Full!"<<endl;
                return;
            }
            i++;
        }
        table[index]=key;
        cout<<key<<" Inserted in the Hash Table at index "<<index<<endl;
    }
    void search(int key)
    {
        int index=hash(key);
        int st_index=index;
        int i=1;
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Found at index "<<index<<endl;
                return;
            }
            index=(st_index+i)%tsize;
            if(index==st_index)
            {
                break;
            }
            i++;
        }
        cout<<key<<" Not Found!"<<endl;
    }
    void DeleteAtIdx(int idx)
    {
        if(table[idx]==-1)
        {
            cout<<"No element at Index "<<idx<<endl;
            return;
        }
        cout<<table[idx]<<" Delete from the index "<<idx<<endl;
        table[idx]=Deleted; 
    }
    void DeleteEle(int value)
    {
        int index=hash(value);
        int st_index=index;
        int i=1;
        while(table[index]!=-1)
        {
            if(table[index]==value)
            {
                cout<<value<<" Deleted From the index "<<index<<endl;
                table[index]=Deleted;
                return;
            }
            index=(st_index+i)%tsize;
            if(index==st_index)
            {
                break;
            }
            i++;
        }
        cout<<value<<" Doesn't exist in the hash table!"<<endl;
    }
    void display()
    {
        cout<<"Index   Element "<<endl;
        for(int i=0;i<tsize;i++)
        {
            cout<<i<<"  ->  "<<table[i]<<endl;
        } 
        cout<<endl;
    }
};
int main()
{
    HashTable h;
    h.insert(10);
    h.insert(23);
    h.insert(92);
    h.insert(33);
    h.insert(69);
    h.insert(101);
    h.insert(78);
    h.display();
    h.search(78);
    h.search(29);
    h.DeleteAtIdx(2);
    h.DeleteEle(78);
    h.display();
    return 0;
}