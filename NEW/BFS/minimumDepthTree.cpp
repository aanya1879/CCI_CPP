#include "../../tree.h"
#include <iostream>
#include <queue>

int f(Node *root)
{
    int minDepth = 0;
    if (root == NULL)
        return minDepth;

    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        minDepth++;
        cout<<Q.size()<<" "<<minDepth<<endl;
        for (int i = Q.size(); i > 0; i--)
        {
            Node *t = Q.front();
            Q.pop();
            if (t->l != NULL)
                Q.push(t->l);
            if (t->r != NULL)
                Q.push(t->r);
            if(t->l == NULL && t->r == NULL)
            {
                return minDepth;
            }
        }
    }

    return minDepth;
}

int main(int argc, char *argv[])
{
    Node *root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r= new Node(5);
        // root->r->l = new Node(6);
        // root->r->r= new Node(7);


    Node *root1 = new Node(10);
    Node *root2 = NULL;

    int result;
    result = f(root);
    cout << "Max length: " << result << endl;
    result = f(root1);
    cout << "Max length: " << result << endl;
    result = f(root2);
    cout << "Max length: " << result << endl;
}
