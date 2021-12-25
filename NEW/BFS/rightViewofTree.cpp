#include "../../tree.h"
#include <iostream>
#include <queue>
#include <vector>

vector<int> f(Node *root)
{
    vector<int> v;
    if (root == NULL){
        cout<<"root is NULL"<<endl;
        return v;
    }

    queue<Node *> Q;
    Node *t;
    Q.push(root);
    while (!Q.empty())
    {
        
        for (int i = Q.size(); i > 0; i--)
        {
            t = Q.front();
            //cout<<t->data<<" ";
            Q.pop();
            if(t->l!=NULL)
                Q.push(t->l);
            if(t->r!=NULL)
                Q.push(t->r);            
        }
        //cout<<endl;
        v.push_back(t->data);
    }
    
    return v; 
}

int main(int argc, char *argv[])
{
    Node *root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r= new Node(5);
    root->r->l = new Node(6);
    root->r->r= new Node(7);


    Node *root1 = new Node(10);
    root1->l = new Node(20);
    root1->l->l = new Node(40);
    root1->l->r= new Node(50);

    Node *root2 = NULL;

    vector<int >result;
    result = f(root);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<", ";
    }
    cout<<endl;
    result = f(root1);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<", ";
    }
    cout<<endl;
    result = f(root2);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<", ";
    }
    cout<<endl;
}
