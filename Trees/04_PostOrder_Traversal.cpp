
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
            helper(root->right,ans);
            ans.push_back(root->val);

            return;
        }
public:
 vector<int> postorderTraversal(TreeNode* root) {
       
        vector<int>ans;
        helper(root,ans);
        return ans;

    }
};

// Iterative soln using 2 stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        if(root == NULL) return ans;
        stack<TreeNode*>s1,s2;

        s1.push(root);
        while(!s1.empty()) {
            //take the top element from stack and pop it
            //push it to s2 
            //and go to its left and right and push it to s1
            root = s1.top();
            s1.pop();
            s2.push(root);
            if(root->left != NULL) s1.push(root->left);
            if(root->right != NULL) s1.push(root->right);
        }      
        //traverse s2 push the top element in the vector and return it
        while(!s2.empty()) {
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};

//Iterative approach 
// do preorder and then reverse it
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
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
        reverse(ans.begin(),ans.end());
        return ans;
    }
};