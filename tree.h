#ifndef TREE // include guard
#define TREE

#include <iostream>
using namespace std;

class Node {
    public:
        Node(int d) :  data(d) { };

        Node(): data(1) { }

        Node* l = NULL;
        Node* r = NULL;
        int data;
};

class TreeNode {
    public:
        TreeNode(int d) :  val(d) { };

        TreeNode(): val(1) { }

        TreeNode* left = NULL;
        TreeNode* right = NULL;
        int val;
};

bool isLeafNode(TreeNode* root){
    if(root->left == NULL && root->right ==NULL)
        return true;
    else
        return false;
}


class Tree{
    public:

        // void push(int d){
        //     Node* n = new Node(d);
        //     if(head==NULL)
        //         head = n;
        //     else{
        //         Node* p = head;
        //         while(p->next!= NULL){
        //             p=p->next;
        //         }
        //         p->next = n;
        //     }
        // }

        // void print(){
        //     Node* p = head;
        //     while(p!= NULL){
        //         cout<<p->data<<"->";
        //         p=p->next;
        //     }
        //     cout<<"NULL";
        //     cout<<endl;
        // }

        // void print(Node* head){
        //     Node* p = head;
        //     while(p!= NULL){
        //         cout<<p->data<<"->";
        //         p=p->next;
        //     }
        //     cout<<"NULL";
        //     cout<<endl;
        // }

        // Node* get(){
        //     return head;
        // }
        // Node* last(){

        //     Node* p = head;
        //     if(p!=NULL){
        //         while(p->next!= NULL){
        //             p=p->next;
        //         }
        //     }
            
        //     return p;
        // }

        // int len(){
        //     int count = 0;
        //     Node* p = head;
        //     while(p!= NULL){
        //         count++;
        //         p=p->next;
        //     }
        //     return count;

        // }


        // Node* head = NULL;

};

#endif
