#include<iostream>
#include<vector>
#include "../../tree.h"

bool hasSequence(TreeNode* root, int i, vector<int> seq){

    if(root==NULL) return false;
    if(root->val==seq[i]){
        if(root->left ==NULL && root->right ==NULL){
                return true;
        }
        return hasSequence(root->left, i+1, seq) || hasSequence(root->right, i+1, seq);
    }
    return false;
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

    vector<int> seq = {1, 9, 9};    
    cout<<hasSequence(root, 0, seq)<<endl;
    cout<<hasSequence(root1, 0, seq)<<endl;

    seq.clear();
    seq = {1, 2, 4};
    cout<<hasSequence(root, 0, seq)<<endl;
}