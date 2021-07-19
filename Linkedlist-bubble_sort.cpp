#include<iostream>
using namespace std;
class node{
    public:
       int val;
       node * next;
        node(int value){
        val=value;
        next=NULL;
        }
};
void printll(node * head){
    if(head==NULL){
        return;
    }
    cout<<head->val<<" ";   
    printll (head->next);
     
  
}
void lengthll(node * head,int & c){
    if(head==NULL){
        return;
    }
    c++;  
  lengthll(head->next,c);
     
  
}
void insertatbeg(node * &head,int val){
    node  * n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
} 

 void bubbleSort(node * &head){
     int n=0;
     lengthll(head,n);
     for(int i=0;i<n-1;i++){
         node * curr=head;
         node *prev=NULL;
         while(curr!=NULL and curr->next!=NULL){
             node * n=curr->next;
             if(curr->val<=n->val){
                 prev=curr;
                 curr=n;
             }
             else{
                 if(prev==NULL){
                     curr->next=n->next;
                     n->next=curr;
                     head=n;
                     prev=n;
                 }
                 else{
                      curr->next=n->next;
                     n->next=curr;
                     prev->next=n;
                     prev=n;
                 }
             }
         }
     }
 }
int main(){
  node * head=NULL;
  for(int i=1;i<=10;i++){
      insertatbeg(head,i);
  }
  cout<<endl<<"BEFORE"<<endl;
  printll(head);
  cout<<endl<<"AFTER"<<endl;
  bubbleSort(head);
  printll(head);
  
}
