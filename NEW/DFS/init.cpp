#include<iostream>
#include "../../tree.h"

void dfs(TreeNode* root){

    if(root==NULL)
        return;
    cout<<root->val<<" ";
    dfs(root->left);
    dfs(root->right);
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    dfs(root);
}