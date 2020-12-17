#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int data)
{
    // Base Case
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    // Recursive case
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    // No case for duplicates as we won't have any in BST
    return root;
};

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void levelorder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *n = q.front();
        cout << n->data << " ";
        q.pop();
        if (n->left != NULL)
            q.push(n->left);
        if (n->right != NULL)
            q.push(n->right);
    }
}

int main()
{
    cout << "Register No: URK19CS2011" << endl;
    cout << "Name: Mounika Murugadass" << endl
         << endl;

    int choice, data;
    Node *root = NULL;
    cout << "Enter your choice\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Level order\n6.Exit\n";
    cin >> choice;
    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to be inserted: ";
            cin >> data;
            root = insert(root, data);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            levelorder(root);
            break;
        default:
            cout << "Wrong Choice... Try again...\n";
            break;
        }
        cout << "Enter your choice\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Level order\n6.Exit\n";
        cin >> choice;
    }
    return 0;
}

/*           50
           /     \
          30      70
         /  \    /  \
        20   40  60   80 

20 30 40 50 60 70 80 
50 30 20 40 70 60 80
20 40 30 60 80 70 50
50 30 70 20 40 60 80 */