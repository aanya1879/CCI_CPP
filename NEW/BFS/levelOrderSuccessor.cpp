#include "../../tree.h"
#include <iostream>
#include <queue>

int f(Node *root, int key)
{
    bool flag= false;
    if (root == NULL){
        cout<<"root is NULL"<<endl;
        return -1;
    }

    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        for (int i = Q.size(); i > 0; i--)
        {
            Node *t = Q.front();
            Q.pop();
            if(flag==true)
                return t->data;
            if (t->l != NULL)
                Q.push(t->l);
            if (t->r != NULL)
                Q.push(t->r);
            if(t->data == key)
            {
                flag=true;
            }
        }
    }

    if(flag==true)
        cout<<"key does not have successor"<<endl;
    else
        cout<<"key does not exist"<<endl;
    return -1; //either key does not exisit or no successor to key
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
    result = f(root, 4);
    cout << "Successor: " << result << endl;
    result = f(root, 3);
    cout << "Successor: " << result << endl;
    result = f(root1, 10);
    cout << "Successor: " << result << endl;
}
