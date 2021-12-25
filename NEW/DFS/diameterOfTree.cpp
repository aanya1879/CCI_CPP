#include<iostream>
#include<vector>
#include "../../tree.h"

int getDiameter(TreeNode* root, int& c){

    if(root==NULL) return 0;

    int left = getDiameter(root->left, c);
    int right = getDiameter(root->right, c);
    c = max(c, left+right);
    
    return 1 +max(left, right);
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

    int d=0;   
    getDiameter(root, d);
    cout<<d<<endl;
    d=0;
    getDiameter(root1, d);
    cout<<d<<endl;


}