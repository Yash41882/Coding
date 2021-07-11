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
void createacycle(node * head){
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next->next;
}
bool checkiscycle(node * head){
    if(head==NULL){
        return false;
    }
    node * start=head;
    node * fast=head;
    while(fast!=NULL && fast->next!=NULL){
        start=start->next;
        fast=fast->next->next;
         if(fast==start){
            return true;
        }
    }
    return false;
}
int main(){
   node * head=NULL;
   for(int i=5;i>=1;i--){
   insertAtstart(head,i);
   }
   createacycle(head);
   if(checkiscycle(head)){
       cout<<"Yes it is cycle";
   }
   else{
       cout<<"Not a cycle";
   }
}
