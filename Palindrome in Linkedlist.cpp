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
  node * middlell(node * head){
      if(head==NULL){
          return head;
      }
      if(head->next==NULL){
          return head;
      }
      node* s=head;
      node * f=head->next;
      while(f!=NULL and f->next!=NULL){
          s=s->next;
          f=f->next;
          f=f->next;
      }
   
      return s;
      
  } 
  node * reversell(node * head){
      node * prev=NULL;
      node * curr=head;
      while(curr!=NULL){
          node * after=curr->next;
          curr->next=prev;
          prev=curr;
          curr=after;
      }
      return prev;
  }
  bool palindorme(node * head){
      if(head==NULL){
          return true;
      }
      if(head->next==NULL){
          return true;
      }
      node * mid=middlell(head);
      mid->next=reversell(mid->next);
      node *c1=head;
      node * c2=mid->next;
       bool check=true;
      while(c2!=NULL){
          if(c1->val!=c2->val){
              check=false;
              break;
          }
          c1=c1->next;
           c2=c2->next;
      }
      return check;
  }
  
int main(){
  node * head=NULL;
  
      insertatbeg(head,1);
      insertatbeg(head,2);
      insertatbeg(head,2);
       insertatbeg(head,1);
  printll(head);
    if(palindorme(head)){
        cout<<"IT IS A PALINDORME";
    } 
    else{
        cout<<"NOT A PALINDORME";
    }
}
