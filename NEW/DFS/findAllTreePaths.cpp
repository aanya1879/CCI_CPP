#include <iostream>
#include <vector>
#include "../../tree.h"

vector<vector<int>> f(TreeNode *root, vector<vector<int>> &result, vector<int> &V, int S)
{
    if (root == NULL)
        return result;

    S = S - root->val;
    V.push_back(root->val);

    if (root->left == NULL && root->right == NULL)
    {
        if (S == 0)
        {
            result.push_back(V);
        }
        V.pop_back();
        //S = S + root->val;

        return result;
    }

    f(root->left, result, V, S);
    f(root->right, result, V, S);
    V.pop_back();
    //S = S + root->val;
    return result;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(9);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(7);

    TreeNode *root1 = NULL;

    vector<vector<int>> result;
    vector<int> V;
    result = f(root, result, V, 12);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << "->";
        }
        cout << endl;
    }
    result.clear();
    V.clear();
    result = f(root1, result, V, 12);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << "->";
        }
        cout << endl;
    }
    result.clear();
    V.clear();
}