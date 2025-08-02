#include<iostream>
using namespace std;
const int tsize=10;
class HashTable
{
    private:
    int table[tsize];
    int hash(int key)//hash function 
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
    void insert(int key)
    {
        int index=hash(key);
        int st_index=index;
        int i=1;
        while(table[index]!=-1)
        {
            index=(st_index+(i*i))%tsize;//quadratic probing
            if(index==st_index)
            {
                cout<<" Hash Table is Full!"<<endl;
                return;
            }
            i++;
        }
        table[index]=key;
        cout<<key<<" Inserte in the Hash Table at Position "<<index+1<<endl;
    }
    void Search(int key)
    {
        int index=hash(key);
        int St_index=index;
        int i=1;
        while(table[index]!=-1)
        {
            if(table[index]==key)
            {
                cout<<key<<" Found at position "<<index+1<<endl;
                return;
            }
            index=(St_index+(i*i))%tsize;
            if(index==St_index)
            {
                break;
            }
            i++;
        }
        cout<<key<<" Not found!"<<endl;
    }
    void display()
    {
        cout<<"Index   Elements"<<endl;
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
    h.insert(10);
    h.insert(23);
    h.insert(92);
    h.insert(33);
    h.insert(69);
    h.insert(101);
    h.insert(78);
    h.display();
    h.Search(78);
    h.Search(29);
    return 0;
}