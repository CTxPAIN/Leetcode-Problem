class Solution {
public:
    vector<vector<int>> ans;

    void dfs(TreeNode* root, int level) {
        if (root == NULL)
            return;

        // If this level doesn't exist yet, create it
        if (ans.size() == level)
            ans.push_back({});

        // Add current node to its level
        ans[level].push_back(root->val);

        // Visit children
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};