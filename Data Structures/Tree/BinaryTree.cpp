#include<iostream>
using namespace std;
class Node
{
    public:
    Node * left;
    Node * right;
    int data;
    Node(int data)
    {
        this->data=data;
        left=right=nullptr;
    }
};
class BinaryTree
{
    Node *root;
    public:
    BinaryTree()
    {
        root=nullptr;
    }
    void CreateBinaryTree()
    {
        root=new Node(10);
        root->right=new Node(11);
        root->left=new Node(9);
        root->left->left=new Node(7);
        root->left->left->right=new Node(8);
        root->left->left->left=new Node(6);
        root->right->right=new Node(12);
        root->right->right->right=new Node(13);
    }
    void InOrderTraverse(Node *node)
    {
        if(node==nullptr)
        {
            // cout<<"Tree is Empty!"<<endl;
            return;
        }
        InOrderTraverse(node->left);
        cout<<node->data<<" ";
        InOrderTraverse(node->right);
    }
    void PreOrderTraverse(Node * node)
    {
        if(node==nullptr)
        {
            return;
        }
        cout<<node->data<<" ";
        PreOrderTraverse(node->left);
        PreOrderTraverse(node->right);
    }
    void PostOrderTraverse(Node *node)
    {
        if(node==nullptr)
        {
            return;
        }
        PostOrderTraverse(node->left);
        PostOrderTraverse(node->right);
        cout<<node->data<<" ";
    }
    void Traverse()
    {
        cout<<"In-Order Traversal:"<<endl;
        InOrderTraverse(root);
        cout<<endl;
        cout<<"Pre-Order Traversal: "<<endl;
        PreOrderTraverse(root);
        cout<<endl;
        cout<<"Post-Order Traversal: "<<endl;
        PostOrderTraverse(root);
        cout<<endl;
    }
};
int main()
{
    BinaryTree bt;
    bt.CreateBinaryTree();
    bt.Traverse();
    return 0;
}