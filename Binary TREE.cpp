#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node * left;
    node * right;
    node (int d){
        val=d;
        left=NULL;
        right=NULL;
    }
};
node * buildtree(node * root){ 
     int val;
     cin>>val;
     if(val==-1){
         return NULL;
     }
   root= new node(val);
     root->left=buildtree(root->left);
     root->right=buildtree(root->right);
     return root;
}
void printpreorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
     printpreorder(root->left);
    printpreorder(root->right); 
}
void printinorder(node * root){
     if(root==NULL){
        return;
     }
     printinorder(root->left);
      cout<<root->val<<" ";
    printinorder(root->right); 
}
void printpostorder(node * root){
     if(root==NULL){
        return;
     }
     printpostorder(root->left);
    printpostorder(root->right); 
     cout<<root->val<<" ";
}
int heightoftree(node * root){
    if(root==NULL){
        return 0;
    }
    int ls=heightoftree(root->left);
    int rs=heightoftree(root->right);
    return max(ls,rs)+1;
}
void printlevelorder(node * root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
    cout<<root->val<<" ";
    return;
    }
   printlevelorder(root->left,k-1);
   printlevelorder(root->right,k-1);
   return;
}
void bfs(node * root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * f=q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<f->val<<" ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
         if(f->right){
            q.push(f->right);
        }}
    }
    return;

}
int noofnodes(node * root){
    if(root==NULL){
        return 0;
    }
    return 1+noofnodes(root->left)+noofnodes(root->right);
}
int diameter(node * root){
    if(root==NULL){
        return 0;
    }
    int h1=heightoftree(root->left);
    int h2=heightoftree(root->right);
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));

}
int main(){
   node * root=buildtree(NULL);
   printpreorder(root);cout<<endl;
//    printinorder(root);cout<<endl;
//    printpostorder(root);cout<<endl;
//    int k=heightoftree(root); 
//    for(int i=1;i<=k;i++){
//    printlevelorder(root,i );
//    cout<<endl;
//    } 
//    bfs(root);
cout<<noofnodes(root);
cout<<diameter(root);
} 
