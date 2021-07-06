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
        }}
    }
    return;

}
int replacesum(node * root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->val;
    }
    int leftsum=replacesum(root->left);
    int rightsum=replacesum(root->right);
    int temp=root->val;
    root->val=leftsum+rightsum;
    return temp+root->val;

}
int main(){
   node * root=buildtree(NULL);
   bfs(root);
   cout<<endl;
   replacesum(root);
    bfs(root);

} 
