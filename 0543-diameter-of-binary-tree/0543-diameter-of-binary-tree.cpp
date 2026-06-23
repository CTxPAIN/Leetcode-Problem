
class Solution {
public:

    int height(TreeNode* root,int& maxdia){
        if(root==NULL)return 0;
        int ltree=height(root->left,maxdia);
        int rtree=height(root->right,maxdia);
        maxdia=max(maxdia,ltree+rtree);

        return 1+max(ltree,rtree);
    }
    int diameterOfBinaryTree(TreeNode* root) {
      int maxdia=0;
      height(root,maxdia);
      return maxdia;
    }
};