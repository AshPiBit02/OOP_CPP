#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* right;
    Node* left;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class BinaryTree
{
public:
    Node* CreateBinaryTree()
    {
        // Example tree:
        //      1
        //     / \
        //    2   3
        //   / \
        //  4   5
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        return root;
    }

    void inOrder(Node* node)
    {
        if (node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
    void preOrder(Node* node)
    {
        if (node == NULL)
            return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
    void postOrder(Node* node)
    {
        if (node == NULL)
            return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
};

int main()
{
    BinaryTree tree;
    Node* root = tree.CreateBinaryTree();
    cout << "Pre-Order Traversal: ";
    tree.preOrder(root);
    cout << endl;
    cout << "In-Order Traversal: ";
    tree.inOrder(root);
    cout << endl;
    cout << "Post-Order Traversal: ";
    tree.postOrder(root);
    cout << endl;
    return 0;
}
