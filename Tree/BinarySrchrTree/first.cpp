#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
class BinarySrchTree
{
    public:
    Node* root;
    BinarySrchTree()
    {
        root=NULL;
    }
    void insertion(int item)
    {
        Node* newNode = new Node(item);
        if (root == NULL)
        {
            root = newNode;
            cout<<item<<" Inserted Successfully"<<endl;
            return;
        }
        Node* current = root;
        Node* parent = NULL;
        while (current != NULL)
        {
            parent = current;
            if (item < current->data)
                current = current->left;
            else
                current = current->right;
        }
        if (item < parent->data)
            parent->left = newNode;
        else
            parent->right = newNode;
        cout<<item<<" Inserted Successfully"<<endl;
    }
    void inOrder(Node* node)
    {
        if(node==NULL)
        {
            return;
        }
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }
    void postOrder(Node* node)
    {
        if(node==NULL)
        {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->data<<" ";
    }
    void preOrder(Node* node)
    {
        if(node==NULL)
        {
            return;
        }
         cout<<node->data<<" ";
         postOrder(node->left);
         postOrder(node->right);
    }
        

};
int main()
{
    BinarySrchTree t;
    t.insertion(10);
    t.insertion(80);
    t.insertion(11);
    t.insertion(12);
    t.insertion(19);
    t.insertion(115);
    t.insertion(15);
    t.insertion(5);
    cout << "InOrder Traversal: ";
    t.inOrder(t.root);
    cout << endl;
    cout<<"PreOrder Traversal: ";
    t.preOrder(t.root);
    cout<<endl;
    cout<<"Post-Order Traversal: ";
    t.postOrder(t.root);
    cout<<endl;
    return 0;
}