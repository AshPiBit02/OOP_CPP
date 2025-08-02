#include<iostream>
using namespace std;
class Node
{
    public:
    Node* left,*right;
    int data;
    Node(int data)
    {
        this->data=data;
        left=right=nullptr;
    }

};
class BST
{
    public:
    Node * root;
    BST()
    {
        root=nullptr;
    }
    Node* Insert(Node* node,int item)
    {
        if(node==nullptr)
        {
            return new Node(item);
        }
        if(node->data>item)
        {
            node->left=Insert(node->left,item);
        }
        else
        {
           node->right=Insert(node->right,item);
        }
        return node;
    }
    void PreOrderTraversal(Node* node)
    {
        if(node==nullptr)
        {
            return ;
        }
        cout<<node->data<<" ";
        PreOrderTraversal(node->left);
        PreOrderTraversal(node->right);
    }
    void InOrderTraversal(Node* node)
    {
        if(node==nullptr)
        return;
        InOrderTraversal(node->left);
        cout<<node->data<<" ";
        InOrderTraversal(node->right);
    }
    void PostOrderTraversal(Node * node)
    {
        if(node==nullptr)
        return;
        PostOrderTraversal(node->left);
        PostOrderTraversal(node->right);
        cout<<node->data<<" ";
    }
    // bool isfound=false;
    void Search(Node*node, int key)
    {
        if(node==nullptr)
        {
            cout<<key<<" Not found!"<<endl;
            return ;
        }
        if(node->data==key)
        {
            // isfound=true;
            cout<<key<<" Found"<<endl;
            return;
        }
        if(node->data<key)
        {
           Search(node->right,key);
        }
        else
        {
           Search(node->left,key);
        }
    }
};
int main()
{
    BST b;
    
    b.root=b.Insert(b.root,10);
    b.root= b.Insert(b.root,9);
    b.root=b.Insert(b.root,12);
    b.root=b.Insert(b.root,16);
    b.root=b.Insert(b.root,20);
    b.root=b.Insert(b.root,60);
    b.root=b.Insert(b.root,90);
    b.root=b.Insert(b.root,1);
    b.root=b.Insert(b.root,7);
    b.Search(b.root,26);
    b.root=b.Insert(b.root,26);
    b.Search(b.root,26); 
    b.root=b.Insert(b.root,6);
    b.Search(b.root,27);
    cout<<"Pre-Order Traversal:"<<endl;
    b.PreOrderTraversal(b.root);
    cout<<endl;
    cout<<"In-Order Traversal:"<<endl;  
    b.InOrderTraversal(b.root);
    cout<<endl;
    cout<<"Post-Order Traversal:"<<endl;
    b.PostOrderTraversal(b.root);
    cout<<endl;     
    return 0;



}