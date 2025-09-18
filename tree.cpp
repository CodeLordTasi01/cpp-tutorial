//Dfs implementation in tree
/*class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if (root == NULL) return ans;
    
            // Stack will hold pairs of TreeNode* and their level
            stack<pair<TreeNode*, int>> stk;
            stk.push({root, 0});
    
            while (!stk.empty()) {
                auto [node, level] = stk.top();
                stk.pop();
    
                // Ensure the answer vector has space for this level
                if (level == ans.size()) {
                    ans.push_back({});
                }
    
                ans[level].push_back(node->val);
    
                // Push right first so that left is processed first (DFS order)
                if (node->right) stk.push({node->right, level + 1});
                if (node->left) stk.push({node->left, level + 1});
            }
    
            return ans;
        }
    };
    */








// Bfs implementation in tree
#include <iostream>
class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if(root == NULL){
                return ans;
            }
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                int n=q.size();
                vector<int> level;
                for(int i=0; i<n; i++){
                    TreeNode* node=q.front();
                    q.pop();
                    if(node->left != NULL){
                        q.push(node->left);
                    }
                    if(node->right != NULL){
                        q.push(node->right);
                    }
                    level.push_back(node->val);
                }
                ans.push_back(level);
            }
            return ans;
        }
    };