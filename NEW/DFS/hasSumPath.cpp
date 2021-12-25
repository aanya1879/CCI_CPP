#include<iostream>
#include "../../tree.h"

bool hasPathSum(TreeNode* root, int S){

    if(root==NULL)
            return false;
        
        if(root->left ==NULL && root->right ==NULL){
            if(S- (root->val)==0)
                return true;
        }

    return hasPathSum(root->left, S - (root->val)) ||
    hasPathSum(root->right, S - (root->val));
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    TreeNode* root1 = NULL;
    
    cout<<hasPathSum(root, 10)<<endl;

    cout<<hasPathSum(root1, 0)<<endl;
}