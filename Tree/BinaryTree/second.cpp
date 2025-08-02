#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
class BinaryTree
{
    public:
   Node* CreateBinaryTree()
   {
    Node* root=new Node(10);
    root->left=new Node(11);
    root->right=new Node(12);
    root->left->left=new Node(13);
    root->left->right=new Node(14);
    root->right->left=new Node(15);
    root->right->right=new Node(16);
    return root;
}
void preOrder(Node* node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
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

// Helper function to delete a leaf node with a given value
bool deleteLeaf(Node*& node, int value)
{
    if(node == NULL)
        return false;
    if(node->data == value)
    {
        if(node->left == NULL && node->right == NULL)
        {
            cout << node->data << " Deleted" << endl;
            delete node;
            node = NULL;
            return true;
        }
        else
        {
            cout << "Node " << value << " is not a leaf node, so can't be deleted!" << endl;
            return false;
        }
    }
    // Try to delete in left or right subtree
    if(deleteLeaf(node->left, value)) return true;
    if(deleteLeaf(node->right, value)) return true;
    return false;
}

void leafDel(Node*& root)
{
    int value;
    cout << "Enter the value of the node to delete: ";
    cin >> value;
    if(!deleteLeaf(root, value))
    {
        cout << "Node with value " << value << " not found or not a leaf node!" << endl;
    }
}
};
int main()
{
    BinaryTree tree;
    Node* root=tree.CreateBinaryTree();
    cout<<"Pre-Order Traversal: ";
    tree.preOrder(root);
    cout<<endl;
    cout<<"In-Order Traversal: ";
    tree.inOrder(root);
    cout<<endl;
    cout<<"Post-Order Traversal: ";
    tree.postOrder(root);
    cout<<endl;
    tree.leafDel(root);
    cout<<"Pre-Order Traversal: ";
    tree.preOrder(root);
    cout<<endl;
    cout<<"In-Order Traversal: ";
    tree.inOrder(root);
    cout<<endl;
    cout<<"Post-Order Traversal: ";
    tree.postOrder(root);
    cout<<endl;
    return 0;
}
