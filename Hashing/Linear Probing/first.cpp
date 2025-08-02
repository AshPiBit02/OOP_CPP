//Basic hash table using linear probing
#include<iostream>
using namespace std;
const int Table_Size = 7;

// HashTable class definition
class HashTable
{
    private:
    int table[Table_Size]; // Array to store hash table elements

    // Hash function to compute index
    int hash(int key)
    {
        return key % Table_Size;
    }
    public:
    // Constructor to initialize table slots to -1 (empty)
    HashTable()
    {
        for(int i=0;i<Table_Size;i++)
        {
            table[i]=-1;
        }
    }

    // Insert a key into the hash table using linear probing
    void put(int key)
    {
        int index = hash(key);         // Compute initial index
        int startIndex = index;        // Remember start to detect full table
        while(table[index] != -1)      // Find next available slot
        {
            index = (index + 1) % Table_Size; // Move to next slot (circular)
            if(index == startIndex)    // If we've looped back, table is full
            {
                cout << "Hash Table is full. Cannot insert key: " << key << endl;
                return;
            }
        }
        table[index] = key;            // Insert key at found slot
    }

    // Search for a key in the hash table
    void search(int key)
    {
        int index=hash(key);           // Compute initial index
        while(table[index]!=-1)        // Continue until empty slot found
        {
            if(table[index]==key)      // Key found
            {
                cout<<key<<" : Key Found"<<endl;
                return;
            }
            index=(index+1)%Table_Size; // Move to next slot (circular)
        }
        cout<<key<<" : key Not Found"<<endl; // Key not found
    }

    // Display the contents of the hash table
    void display()
    {
        cout<<"Hash Table:"<<endl;
        for(int i=0;i<Table_Size;i++)
        {
            cout<<" -----------"<<endl;
            if(table[i]!=-1)
            {
                cout<<" | "<<i<<" | "<<table[i]<<" | "; // Print value if exists
            }else{
                cout<<" | "<<i<<" | "<<" - "<<" | ";    // Print '-' for empty slot
            }
            cout<<endl;
        }
    }
};

int main()
{
    HashTable hashtable;           // Create hash table object
    hashtable.put(15);             // Insert keys
    hashtable.put(11);
    hashtable.put(27);
    hashtable.put(80);
    hashtable.put(12);
    hashtable.display();           // Display hash table

    cout<<"\nSearching Results:"<<endl;
    hashtable.search(12);          // Search for key 12
    hashtable.search(10);          // Search for key 10 (not present)
    hashtable.search(80);          // Search for key 80
    return 0;
}