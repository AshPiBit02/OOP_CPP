#include<iostream>
using namespace std;
const int Table_Size=9,prime1=3,prime2=7;
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
        int index = hash(key);
        int startIndex = index;
        int i = 1;
        while(table[index] != -1)
        {
            index = (startIndex + i * prime2) % Table_Size; // double hashing step
            if(index == startIndex)
            {
                cout << key << " Key can't be inserted as Hash Table is full!" << endl;
                return;
            }
            i++;
        }
        table[index] = key;
        cout << key << " Key Inserted at position " << index+1 << " Successfully" << endl;
    }
    void SrchKey(int key)
    {
        int index = hash(key);
        int startIndex = index;
        int i = 1;
        while(table[index] != -1)
        {
            if(table[index] == key)
            {
                cout << key << " Key found at Position " << index+1 << endl;
                return;
            }
            index = (startIndex + i * prime2) % Table_Size;
            if(index == startIndex)
                break;
            i++;
        }
        cout << key << " Key doesn't exist in the Hash Table!" << endl;
    }
     void Display()
    {
        cout<<"Hash Table"<<endl;
        for(int i=0;i<Table_Size;i++)
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
    }
    cout<<"----------"<<endl;
    }
};
int main()
{
    HashTable hash;

    // Insert keys
    hash.InsertKey(15);
    hash.InsertKey(23);
    hash.InsertKey(7);
    hash.InsertKey(31);
    hash.InsertKey(10);
    hash.InsertKey(19);
    hash.InsertKey(20);
    hash.InsertKey(5);   // This should fill the table

    // Try to insert when table is full
    hash.InsertKey(12);

    // Display the hash table
    hash.Display();

    // Search for existing keys
    hash.SrchKey(15);
    hash.SrchKey(31);
    hash.SrchKey(5);

    // Search for a non-existing key
    hash.SrchKey(100);

    return 0;
}

