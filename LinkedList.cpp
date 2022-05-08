//Linked List

#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

};

void printList(node*n){
    while(n!=NULL){
        cout <<n->data<<endl;
        n=n->next;
    }

};

int main()
{
    int v1,v2,v3,v4,v5;
    cout<<"Enter any five values : ";
    cin>>v1>>v2>>v3>>v4>>v5;

    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    head->data = v1;
    head->next = second;
    second->data = v2;
    second->next = third;
    third->data = v3;
    third->next = fourth;
    fourth->data = v4;
    fourth->next = fifth;
    fifth->data = v5;
    fifth->next = NULL;

    printList(head);


}
