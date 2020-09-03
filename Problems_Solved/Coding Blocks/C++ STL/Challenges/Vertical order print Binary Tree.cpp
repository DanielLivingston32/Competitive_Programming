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
        left = right = NULL;
    }
};

void insertNodes(Node*& root,unsigned int value,queue<Node*>& q){
    Node* node = new Node(value);
    if(root = NULL){
        root = node;
    }else if(q.front()->left = NULL){
        
    }
}

Node* createTree(unsigned int n){
    queue<Node *>q;
    Node* root = NULL;
    unsigned int value;
    for(int i=0;i<n;i++){
        cin>>value;
        insertNodes(root,value,q);
    }
}

int main()
{
    unsigned int n;
    cin >> n;
    Node* root = createTree(n)
}