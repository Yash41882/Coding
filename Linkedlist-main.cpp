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
void  insertatend(node * &head,int v){
    node *n =new node(v); //creating a new node which is to be added at front
    if(head==NULL){  //If it is first node
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
int length(node *head){
    int length=0;
    while(head!=NULL){
     length++;
     head=head->next;
    }
    return length;
}
void insertatany(node * &head,int v,int pos){
    node *n =new node(v); //creating a new node which is to be added at front
    if(head==NULL){  //If it is first node
        head=n;
        return;
    }
    if(pos>=length(head)){
         insertatend(head,v);
        return;
    }
    node * temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
   n->next=temp->next;
   temp->next=n;
   
}
void deletefromstart(node * &head)
{
    if(head==NULL){
     return;
    }
    else{
        node * curr=head;
        head=head->next;
        delete curr; // This is do because to delete the head from the heap
        curr=NULL; 
    }
}
void deletefromend(node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
      node* curr=head;
      head=NULL;
      delete curr;
      curr=NULL;
      return;
    }
    else{
        node *temp= head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        node *last=temp->next;
        temp->next=NULL;
        delete last;
        last=NULL;
    }
}
node * serachll(node *head,int key){
    while(head!=NULL){
        if(head->val==key){
            return head;
        }
        head=head->next;
    }
    return NULL;
}
node * recursivesearchll(node *head,int key){
    if(head==NULL){
        return NULL;
    }
    if(head->val==key){
        return head;
    }
    recursivesearchll(head->next,key);
}
int main(){
   node * head=NULL;
   for(int i=5;i>=1;i--){
   insertAtstart(head,i);
   }
   insertatend(head,6);
  // printlinkedlist(head);
   insertatany(head,55,2);
  // printlinkedlist(head);
   deletefromstart(head);
   deletefromend(head);
   cout<<endl<<"length of linkedlist:- "<<length(head)<<endl;
   printlinkedlist(head);
}
