#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class TreeNode {
    
friend class BinStrTree;
public:
    TreeNode(): value(""), count(1), left(nullptr), right(nullptr) {}
    TreeNode(string s, TreeNode *lchild = nullptr, TreeNode *rchild = nullptr): value(s), count(1), left(lchild), right(nullptr)
    {
        cout << "construct" << endl;
        right = rchild;
    }
    TreeNode(const TreeNode &);
    ~TreeNode();
    void print_info();

private:
    void CopyTree(void);
    int ReleaseTree(void);
    string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

void TreeNode::CopyTree(void)
{
    cout << "copytree" << value << endl;
    if (left) {
        left->CopyTree();
    }
    if (right)
        right->CopyTree();
    ++count;
}

TreeNode::TreeNode(const TreeNode &tn): value(tn.value), count(1), left(tn.left), right(tn.right)
{
    if (left)
        left->CopyTree();
    if (right)
        right->CopyTree();
}

int TreeNode::ReleaseTree(void)
{
    cout << "release " << value << " " << count << endl;
    if (left)
    {
        if (!left->ReleaseTree())
            delete left;
    }
    if (right)
    {
        if (!right->ReleaseTree())
            delete right;
    }
    --count;
    return count;
}

TreeNode::~TreeNode()
{
    if (count)
        ReleaseTree();
}

class BinStrTree {

public:
    BinStrTree(): root(nullptr) {}
    BinStrTree(TreeNode *t = nullptr): root(t) {}
    BinStrTree(const BinStrTree &);
    ~BinStrTree();

private:
    TreeNode *root;
};

BinStrTree::BinStrTree(const BinStrTree &bst): root(bst.root)
{
    root->CopyTree();
}

BinStrTree::~BinStrTree()
{
    if (!root->ReleaseTree())
        delete root;
}