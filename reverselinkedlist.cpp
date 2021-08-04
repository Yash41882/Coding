#include <iostream>
using namespace std;

class node{
public:
    int val;
    node *next;  //next is pointing to next node(next val and next to next address) and not integer alone

    node(int v){
        val =v;
        //not sure about next node address currently
        next =NULL;
    }
};
void printlinkedlist(node * head){
    while(head!=NULL){
        cout<<head->val<<" ";
         head=head->next;
    }
}
void insertAtstart(node * &head,int v){
  node *n =new node(v); //creating a new node which is to be added at front
    if(head==NULL){  //If it is first node
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void printrevll(node * head){
    if(head==NULL){
        return;
    }
     printrevll(head->next);
    // cout<<head->val;
}
void reverselinkedlist(node * & head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node * prev=NULL;
    node * curr=head;
    while(curr!=NULL){
        node * after=curr->next;
        curr->next=prev;
        prev=curr;
        curr=after;
    }
    head=prev;
    delete prev,curr;
    prev=NULL;
    curr=NULL; 
    
}
   
 int main(){
 node* head =NULL;  //this is going to store the address of first element of linked list
insertAtstart(head,6);
 insertAtstart(head,5);
 insertAtstart(head,4);
 insertAtstart(head,3);
 insertAtstart(head,2);
 insertAtstart(head,1);
 printrevll(head);
 reverselinkedlist(head);
 printlinkedlist(head);
}