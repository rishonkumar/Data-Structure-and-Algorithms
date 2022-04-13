// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1#


#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
};


int countNodes(Node *root) {

    if(root == NULL) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCBT(Node* root, int idx, int count) {

    if(root == NULL) return true;

    if(idx >= count) return false;

    else {
        bool left = isCBT(root->left, 2*idx+1, count);
        bool right = isCBT(root->right, 2*idx+2, count);
        return (left && right);
    }
}

bool isMaxOrder(Node *root) {

    //leaf node
    if(root->left == NULL && root->right == NULL) {
        return true;
    }

    if(root->right == NULL) {
        return (root->data > root->left->data);
    }
    else {
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);

        if(left && right && (root->data > root->left->data) && (root->data > root->right->data))
            return true;
        
        else 
            return false;
    }
}

bool isHeap(struct Node* root) {
    
    int idx = 0;
    int totalCount = countNodes(root);

    if(isCBT(root,idx,totalCount) && isMaxOrder(root)) 
        return true;
    
    else
        return false;
}