#include<iostream>
using namespace std;
class node{
  public:
    int val;
    node * next; // next is pointing to next node.
    node(int v){
        val=v;
        next=NULL;
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
int findmiddle(node *head){
    if(head==NULL){
        return -1;
    }
   if(head->next==NULL){
      return head->val;
    }
    else{
        node * slow=head;
        node * fast=head;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        return slow->val;
        delete fast;
        delete slow;
        fast=NULL;
        slow=NULL;
    }
    return -1;
}
int main(){
   node * head=NULL;
   for(int i=5;i>=1;i--){
   insertAtstart(head,i);
   }
   printlinkedlist(head);
   cout<<"\nMIDLLE VALUE IS "<<findmiddle(head);
}
