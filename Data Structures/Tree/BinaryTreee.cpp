#include<iostream>
using namespace std;
class Node
{
    public:
    Node *right,*left;
    int data;
    Node(int data)
    {
        this->data=data;
        right=left=nullptr;
    }
};
class BinaryTree
{
    public:
    Node* root;
    BinaryTree()
    {
        root=nullptr;
    }
    void CreateBinaryTree()
    {
        root=new Node(10);
        root->right=new Node(11);
        root->left= new Node(12);
        root->right->left=new Node(9);
        root->left->right=new Node(20);
        root->left->left=new Node(13);
        root->right->right=new Node(15);
    }
    void InOrderTraversal(Node* node)
    {
        if(node==nullptr)
        {
            return;
        }
        InOrderTraversal(node->left);
        cout<<node->data<<" ";
        InOrderTraversal(node->right);
    }
    void PreOrderTraversal(Node * node)
    {
        if(node==nullptr)
        {
        return;
        }
        cout<<node->data<<" ";
        PreOrderTraversal(node->left);
        PreOrderTraversal(node->right);
    }
    void PostOrderTraversal(Node* node)
    {
        if(node==nullptr)
        {
        return;
        }
        PostOrderTraversal(node->left);
        PostOrderTraversal(node->right);
        cout<<node->data<<" ";
    }
};
int main()
{
    BinaryTree b;
    b.CreateBinaryTree();
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