#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class node{
    public:
    node * left;
    node * right;
    int val;
    node(int v){
      val=v;
      left=NULL;
      right=NULL;
    }
};
node * insertinbst(node * root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<=root->val){
       root->left=insertinbst(root->left,val);
    }
    else{
          root->right=insertinbst(root->right,val);
    }
    return root;
}
node *   buildtree(){
      int d;
      cin>>d;
      node * root=NULL;
      while(d!=-1){
          root=insertinbst(root,d);
          cin>>d;
      }
      return root;
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
        cout<<f->val<<",";
        q.pop();
          if(f->left){
            q.push(f->left);
          }
           if(f->right){
            q.push(f->right);
           }
        }
    }
    return;

}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);
}
bool search (node * root,int key){
    if(root==NULL){
        return false;
    }
    if(root->val==key){
        return true;
    }
    if(key<=root->val){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }

}
node * deleteinbst(node * root, int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->val){
        root->left=deleteinbst(root->left,data);
        return root;
    }
    else if(data==root->val){
        // case 1: node with zero children
        if(root->left==NULL and root->right==NULL)
        delete root;
        return NULL;
        // case 2 if there is 2 child
        if(root->left!=NULL and root->right==NULL){
            node * temp= root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL and root->right!=NULL){
            node * temp= root->right ;
            delete root;
            return temp;
        }
        // case 3 case with two children
        else{
            node * replace =root->right;
            while(replace->left!=NULL){
                replace=replace->left;
            }
            root->val=replace->val;
            root->right=deleteinbst(root->right,replace->val);
            return root;
        }

    }
    else{
       root->right=deleteinbst(root->right,data);
       return root; 
    }

}
bool checkbst(node * root,int minV=INT_MIN,int maxv=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->val>=minV and root->val<=maxv and checkbst(root->left,minV,root->val) and checkbst(root->right,root->val,maxv))
    {
        return true;
    }
    return false;
}
int main(){
      node * root=buildtree();
         inorder(root);
         cout<<endl;
    //   bfs(root);
    //   int k;
    //   cout<<"Enter key to find"<<endl;
    //   cin>>k;
    //   if(search(root,k)){
    //       cout<<"Found";
    //   }
    //   else{
    //       cout<<"NOT FOUND";
    //   }
    // cout<<"Enter key to delete"<<endl;
    // cin>>k;
    // root=deleteinbst(root,k);
    // inorder(root);cout<<endl;
    // bfs(root);
    if(checkbst(root)){
        cout<<"BST";
    }
    else{
        cout<<"NOT A BST";
    }
      return 0;
}
