#ifndef NODE // include guard
#define NODE

#include <iostream>
using namespace std;

template <typename T> class Node {
    public:
        Node(T d) :  data(d) { };

        Node(): data(1) { }

        Node<T>* next = NULL;
        T data;
};

template <typename T> class LinkedList{
    public:

        void push(T d){
            Node<T>* n = new Node<T>(d);
            if(head==NULL)
                head = n;
            else{
                Node<T>* p = head;
                while(p->next!= NULL){
                    p=p->next;
                }
                p->next = n;
            }
        }

        void print(){
            Node<T>* p = head;
            while(p!= NULL){
                cout<<p->data<<"->";
                p=p->next;
            }
            cout<<"NULL";
            cout<<endl;
        }

        void print(Node<T>* head){
            Node<T>* p = head;
            while(p!= NULL){
                cout<<p->data<<"->";
                p=p->next;
            }
            cout<<"NULL";
            cout<<endl;
        }

        Node<T>* get(){
            return head;
        }

        int len(){
            int count = 0;
            Node<T>* p = head;
            while(p!= NULL){
                count++;
                p=p->next;
            }
            return count;

        }


        Node<T>* head = NULL;

};

#endif