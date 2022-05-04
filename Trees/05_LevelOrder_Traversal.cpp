#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;

        if(root == NULL) return ans;
        //push the root into the queue
        q.push(root);

        //traverse the queue
        while(!q.empty()) {
        	int size = q.size();
        	vector<int>level;

        	//traverse the current element in the queue
        	for(int i = 0 ; i < size ; i++) {
        		TreeNode *node = q.front();
        		q.pop();
        		//check wether current node has left and right
        		//if present push it into queue
        		if(node->left != NULL) q.push(node->left);
        		if(node->right != NULL) q.push(node->right);
        		level.push_back(node->val);
        	}
        	ans.push_back(level);
        }
        return ans;
    }
};