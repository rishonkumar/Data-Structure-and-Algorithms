
#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  
class Solution {

    private:
        void helper(TreeNode* root , vector<int>&ans) {
            if(root == NULL) {
                return;
            }
            ans.push_back(root->val);
            helper(root->left,ans);
            helper(root->right,ans);

            return;
        }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        helper(root,ans);
        return ans;

    }
};

//Iterative approach
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        
        if(root == NULL) return ans;
        stack<TreeNode*>st;
        //push root to stack
        st.push(root);
        while(!st.empty()) {
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            //check if left and right
            //first push right then left
            if(root->right != NULL) {
                st.push(root->right);
            }
            if(root->left != NULL) {
                st.push(root->left);
            }
        }
        return ans;
    }
};