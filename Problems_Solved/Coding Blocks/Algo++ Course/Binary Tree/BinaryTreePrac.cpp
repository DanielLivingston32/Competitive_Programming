#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int findHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ls = findHeight(root->left);
    int rs = findHeight(root->right);
    return max(ls, rs) + 1;
}

void printKthNodes(Node *root, int k)
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
    printKthNodes(root->left, k - 1);
    printKthNodes(root->right, k - 1);
}

void levelorder(Node *root)
{
    int totalTreeHeight = findHeight(root);
    for (int i = 1; i <= totalTreeHeight; i++)
    {
        printKthNodes(root, i);
    }
}

void bfs(Node *root)
{
    queue<Node *> bfs;
    bfs.push(root);
    while (!bfs.empty())
    {
        Node *current = bfs.front();
        bfs.pop();
        cout << current->data << " ";
        if (current->left)
        {
            bfs.push(current->left);
        }
        if (current->right)
        {
            bfs.push(current->right);
        }
    }
}

void bfsWithEndl(Node *root)
{
    queue<Node *> bfs;
    bfs.push(root);
    bfs.push(NULL);
    while (!bfs.empty())
    {
        Node *current = bfs.front();
        bfs.pop();

        if (current == NULL)
        {
            cout << endl;
            if (!bfs.empty())
            {
                bfs.push(NULL);
            }
            continue;
        }

        cout << current->data << " ";

        if (current->left)
        {
            bfs.push(current->left);
        }
        if (current->right)
        {
            bfs.push(current->right);
        }
    }
}

int cntNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + cntNodes(root->left) + cntNodes(root->right);
}

int sumNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int diameterOfTreeNaive(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // Calculate diameter including centre
    int leftDiameter = findHeight(root->left);
    int rightDiameter = findHeight(root->right);
    int centerIncluded = leftDiameter + rightDiameter;
    // Calculate value for left Subtree
    int leftSubtree = diameterOfTreeNaive(root->left);
    int rightSubtree = diameterOfTreeNaive(root->right);
    return max(centerIncluded, max(leftSubtree, rightSubtree));
}

pair<int, int> diameterOfTreeFast(Node *root)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }
    pair<int, int> left = diameterOfTreeFast(root->left);
    pair<int, int> right = diameterOfTreeFast(root->right);
    // Calculations
    return make_pair(max(left.first, right.first) + 1, max(left.first + right.first, max(left.second, right.second)));
}

int sumOfChildNodes(Node *root)
{
    if (root->left == NULL and root->right == NULL)
    {
        return root->data;
    }
    int left_value = 0, right_value = 0;
    if (root->left != NULL)
    {
        left_value = sumOfChildNodes(root->left);
    }

    if (root->right != NULL)
    {
        right_value = sumOfChildNodes(root->right);
    }
    int temp = root->data;
    root->data = left_value + right_value;
    return root->data + temp;
}

pair<int, bool> isHeightBalanced(Node *root)
{
    if (root == NULL)
    {
        return make_pair(0, true);
    }
    // Recursive Case
    pair<int, bool> leftSubtree = isHeightBalanced(root->left);
    pair<int, bool> rightSubtree = isHeightBalanced(root->right);
    pair<int, bool> result;
    result.first = max(leftSubtree.first, rightSubtree.first) + 1;
    if (leftSubtree.second && rightSubtree.second && (abs(leftSubtree.first - rightSubtree.first) <= 1))
    {
        result.second = true;
    }
    else
    {
        result.second = false;
    }
    return result;
}

Node *buildBalancedTree(int arr[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    Node *root = new Node(arr[mid]);
    root->left = buildBalancedTree(arr, s, mid - 1);
    root->right = buildBalancedTree(arr, mid + 1, e);
    return root;
}

Node *buildTreeFromInorderPreorder(int inorderArr[], int preorderArr[], int start, int end)
{
    static int j = 0;
    if (start > end)
    {
        return NULL;
    }
    // Recursive Case
    Node *root = new Node(preorderArr[j]);
    int index = -1;
    for (int i = start; i <= end; i++)
    {
        if (preorderArr[j] == inorderArr[i])
        {
            index = i;
            break;
        }
    }

    j++;
    root->left = buildTreeFromInorderPreorder(inorderArr, preorderArr, start, index - 1);
    root->right = buildTreeFromInorderPreorder(inorderArr, preorderArr, index + 1, end);
    return root;
}

void rightViewPrint(Node *root, int level)
{
    static int maxLevel = -1;
    if (root == NULL)
    {
        return;
    }
    if (level > maxLevel)
    {
        cout << root->data << " ";
        maxLevel++;
    }
    rightViewPrint(root->right, level + 1);
    rightViewPrint(root->left, level + 1);
}

void printKthLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

int printKthNodeFromTarget(Node *root, int k, int target)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == target)
    {
        printKthLevel(root, k);
        return 1;
    }
    // Call left side and check condition
    int DL = printKthNodeFromTarget(root->left, k, target);
    if (DL != -1)
    {
        if (k == DL)
        {
            cout << root->data << " ";
            return -1;
        }
        printKthLevel(root->right, k - DL - 1);
        return DL + 1;
    }
    int DR = printKthNodeFromTarget(root->right, k, target);
    if (DR != -1)
    {
        if (k == DL)
        {
            cout << root->data << " ";
            return -1;
        }
        printKthLevel(root->left, k - DL - 1);
        return DR + 1;
    }
    return -1;
}

Node *LCA(Node *root, int a, int b)
{
    if (root == NULL)
    {
        return NULL;
    }
    if(root)
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Node *root = buildTree();
    // cout << "\nInorder Traversal: ";
    // inorder(root);
    // cout << "\nPreorder Traversal: ";
    // preorder(root);
    // cout << "\nPostorder Traversal: ";
    // postorder(root);
    // cout << "\nLevelorder Traversal: ";
    // levelorder(root);
    // cout << "\n BFS: ";
    // bfs(root);
    // cout << "\n BFS with ENDL:\n";
    // bfsWithEndl(root);
    // cout << "\n Count of Nodes: ";
    // cout << cntNodes(root) << endl;
    // cout << "Sum of Nodes: ";
    // cout << sumNodes(root) << endl;
    // cout << "Diameter of Tree: " << sumOfChildNodes(root) << endl;
    // cout << "\n BFS with ENDL:\n";
    // bfsWithEndl(root);
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // Node *root = buildBalancedTree(arr, 0, n - 1);
    // cout << "Height Balanced: " << isHeightBalanced(root).second << endl;
    // cout << "\n BFS with ENDL:\n";
    // bfsWithEndl(root);
    // int n;
    // cin >> n;
    // int preorderArr[n], inorderArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> preorderArr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> inorderArr[i];
    // }

    // Node *root = buildTreeFromInorderPreorder(inorderArr, preorderArr, 0, n - 1);
    cout << "\n BFS with ENDL:\n";
    bfsWithEndl(root);
    // rightViewPrint(root, 0);
    cout << endl;
    printKthNodeFromTarget(root, 3, 8);
    return 0;
}