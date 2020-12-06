#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *
BuildTree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

void PreorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreorderPrint(root->left);
    PreorderPrint(root->right);
}

void InorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderPrint(root->left);
    cout << root->data << " ";
    InorderPrint(root->right);
}

void PostorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PreorderPrint(root->left);
    PreorderPrint(root->right);
    cout << root->data << " ";
}

int TreeHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ls = TreeHeight(root->left);
    int rs = TreeHeight(root->right);
    return max(ls, rs) + 1;
}

void PrintKthLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }
    PrintKthLevel(root->left, k - 1);
    PrintKthLevel(root->right, k - 1);
}

void LevelOrderRecursive(Node *root)
{
    int height = TreeHeight(root);
    for (int k = 1; k <= height; k++)
    {
        PrintKthLevel(root, k);
    }
}

void bfs(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        cout<<q.front()->data<<" , ";
        if(q.front()->left){
            q.push(q.front()->left);
        }
        if(q.front()->right){
            q.push(q.front()->right);
        }
        q.pop();
    }
}

int main()
{
    Node *root = BuildTree();
    PreorderPrint(root);
    cout << endl;
    InorderPrint(root);
    cout << endl;
    PreorderPrint(root);
    cout << endl;
    LevelOrderRecursive(root);
    cout<<endl;
    bfs(root);
}