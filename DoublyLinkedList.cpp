//Doubly Linked List

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *previous;
    node *next;
};

node *head = NULL;
void insert(int newdata) {
   node *newNode = new node();
   newNode->data = newdata;
   newNode->previous = NULL;
   newNode->next = head;
   if(head != NULL)
   head->previous = newNode ;
   head = newNode;
}

void deleteNode(node** head_ref, node* del)
{
     if (*head_ref == NULL || del == NULL)
        return;
 
    if (*head_ref == del)
        *head_ref = del->next;
 
       if (del->next != NULL)
        del->next->previous = del->previous;
 
    if (del->previous != NULL)
        del->previous->next = del->next;
 
    free(del);
    return;

}

void print() {
   node  *ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<" "<<endl;
}


int main()
{
   insert(9);
   insert(5);
   insert(7);
   insert(2);
   insert(10);
   cout<<"The doubly linked list is: ";
   print();
    
  deleteNode(&head,head);

   cout<<"Doubly Linked list after deletion is : ";
   print();
   return 0;
}
