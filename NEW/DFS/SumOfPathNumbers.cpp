#include<iostream>
#include "../../tree.h"

void pathSum(TreeNode* root, int &sum, int num){
    if(root==NULL) return;
    num = num*10 + root->val;
    if(isLeafNode(root)){
        sum +=num;
        //num=num/10;
        return ;
    }

    pathSum(root->left, sum, num);
    pathSum(root->right, sum, num);
    //num=num/10;

    return ;
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(9);
    //root->left->left = new TreeNode(4);
    //root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(9);

    TreeNode* root1 = NULL;
    int sum =0, num=0;
    pathSum(root, sum, num);
    cout<<sum<<endl;

}