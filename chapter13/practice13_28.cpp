#include <string>
class TreeNode {
private:
  std::string value;
  int count;
  TreeNode *left;
  TreeNode *right;

public:
  TreeNode();
  TreeNode(const TreeNode &t);
  TreeNode& operator=(const TreeNode &t);
  ~TreeNode();
};

class BinStrTree {
private:
  TreeNode *root;

public:
  BinStrTree() = default;
  ~BinStrTree();
};

BinStrTree::~BinStrTree() {}

TreeNode::TreeNode() : value(), count(0), left(nullptr), right(nullptr) {}
TreeNode::TreeNode(const TreeNode &t)
    : value(t.value), count(t.count), left(new TreeNode(*t.left)),
      right(new TreeNode(*t.right)) {}

TreeNode &TreeNode::operator=(const TreeNode &t){
    value=t.value;
    count=t.count;
    auto temp=t.left;
    if(left){
        delete left;
    }
    left=temp;
    temp=t.right;
    if(right){
        delete right;
    }
    right=temp;
}
TreeNode::~TreeNode() {
    if(left){
        delete left;
    }
    if(right){
        delete right;
    }
}
