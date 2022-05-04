
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
            helper(root->left,ans);
            ans.push_back(root->val);
            helper(root->right,ans);

            return;
        }
public:
 vector<int> inorderTraversal(TreeNode* root) {
       
        vector<int>ans;
        helper(root,ans);
        return ans;

    }
};

// Iterative approach
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        if(root == NULL) return ans;

        stack<TreeNode*>st;
        TreeNode* node = root;

        while(true) {

            if(node != NULL) {
                //push into stack(similar to auxillary stack space)
                //go to its left
                st.push(node);
                node = node->left;
            }

            else {
                //means node == null
                //if stack is empty break
                //take top of the stack and push it to answer
                //then move right
                if(st.empty() == true) break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;

    }
};