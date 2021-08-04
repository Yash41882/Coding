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
    cout<<head->val;
	if(head->next!=NULL){
	cout<<" -> ";
	}
    printll (head->next);
}
void insertatend(node * &head,int val){
    node  * n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node * temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
    n->next=NULL;
}
node* reverseKGroup(node* head,int k){
    //base case
    if(head==NULL)
    return head;
    node* curr=head;
    //get the kth node from this node which is going to be our new starting point
    for(int i=0;i<k;i++)
    curr=curr->next;
    node* restHead=reverseKGroup(curr,k);  //except first k , recursion will reverse the rest
   //reverse the current k nodes
   int c=0;
   node* prev=NULL;
   curr=head;
  //reversing first k nodes
   while(c<k){
       //reverse the current node
       node* n = curr->next;
       curr->next = prev;
       prev = curr;
       curr= n;
       c++;
   }
   head->next = restHead;  //after reversing head is pointing to last node of current k nodes
   return prev;
}
int main(){
  node * head=NULL;
  // Input all the given n,k and list of elements
  int n,k;
  cin>>n>>k;
  while(n--){
      int num;
      cin>>num;
      insertatend(head,num);
  }
  cout<<"Original LL is : ";
  printll(head);
  head=reverseKGroup(head,k);
  cout<<endl;
  cout<<"After k Reverse : ";
   printll(head);
}
