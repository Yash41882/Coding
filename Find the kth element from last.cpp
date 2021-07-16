/*Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.

Input Format
First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.

Constraints
n < 10^5

Output Format
Output a single line containing the node value at the kth element from last.

Sample Input
1 2 3 4 5 6 -1
3
Sample Output
4*/
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
void insertatend(node *& head,int val){
	node * n=new node(val);
	if(head==NULL){
	    head=n;
		n->next=NULL;
		return;
	}
    node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->next=NULL;
}
void kfromlast(node * head,int k){
	
	if(head==NULL){
		return;
	}
	node * temp=head;
    while(k>0){
       temp=temp->next;
	   k--;
    }
	node *sec=head;
	while(temp->next!=NULL){
		 temp=temp->next;
		 sec=sec->next;
	}
}
int main() {
	node * head=NULL;
	int n=1;
	while(n!=-1){
	  cin>>n;
	  insertatend(head,n);
	}
	int k;
	cin>>k;
	kfromlast(head,k);
	return 0;
}
