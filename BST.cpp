// # include <iostream>
// using namespace std;
// struct node {
//     int data;
//     struct node *left,*right;
// };
// struct node *newnode(int element){
//     struct node*t=new node();
//     // struct node *t=(struct node *)malloc((sizeof(struct node)));
//     t->data=element;
//     t->left=NULL,t->right=NULL;
//     return t;
// }
// struct node *insert(struct node *node,int key){
//     if(node==NULL){
//         return newnode(key);
//     }
//     else if (key<node->data){
//             node->left=insert(node->left,key);
//         }
    
//     else if(key>node->data){
//         node->right=insert(node->right,key);
//     }
//     return node;
    
// }
// void inorder_traver(struct node *root){
//     if(root!=NULL){
//         inorder_traver(root->left);
//         cout<<root->data<<"\n";
//         inorder_traver(root->right);
//     }
// }
// int height(struct node *root){
//     if(root==NULL){
//         return 0;
//     }
//     else{
//         int l_height=height(root->left);
//         int r_height=height(root->right);
//         if(l_height>r_height){
//             return l_height+1;
//         }
//         else{
//             return r_height+1;
//         }
//     }
    
// }
// int main(){
//     struct node *node=NULL;
//     int n;
//     // cin>>n;
//     int key;
//     for(int i=0;i<n;i++){
//         cin>>key;
//         node=insert(node,key);
        
//     }
//     // inorder_traver(node);
//       int x=height(node);
//       cout<<x<<endl;
    
// }

// # include <iostream>
// #include <queue>
// using namespace std;
// struct node {
//     int data;
//     int level;
//     struct node *left;
//     struct node *right;
    
// };
// struct node*insert(struct node *root,int data){
//     struct node*t =new node();
//     t->data=data;
//     t->level=0;
//     t->left=NULL;
//     t->right=NULL;
//     if(root==NULL){
//         return t;
//     }
//     else{
//         queue <node*>q;
//         q.push(root);
//         node *n_t;
//         while(!q.empty()){
//             n_t=q.front();
//             q.pop();
//             if(n_t->left!=NULL){
//                 q.push(n_t->left);
//             }
//             else{ 
//             break;
//             }
//             if(n_t->right!=NULL){
//                 q.push(n_t->right);
//             }
//             else{
//                 break;
//             }
            
//         }
        
        
//     }
    
// }
// int main(){
//     return 0;
// }

// level order bst
// # include <stdio.h>
// # include <stdlib.h>
// struct node {
//     int data;
//     struct node*left ,*right;
// };
// struct node* newnode(int element){
//     struct node*t=(struct node*)malloc(sizeof(struct node));
//     t->data=element;
//     t->left=NULL,t->right=NULL;
    
// }
// void inorder_trav(struct node *root){
//     if(root!=NULL){
//         inorder_trav(root->left);
//         printf("%d\n",root->data);
//         inorder_trav(root->right);
//     }
// }
// struct node *insert(struct node*node,int key){
//     if(node==NULL){
//         return newnode(key);
//     }
//     if(key<node->data){
//         node->left=insert(node->left,key);
//     }
//     else if(key>node->data){
//         node->right=insert(node->right,key);
//     }
//     return node;
// }
// void min(struct node *root){
//     // struct node*root2=NULL;
//     while(root->left!=NULL){
//         // root2=root;
//         root=root->left;
    
        
//         // printf("%d",root2->data);
//         // min(root->left);
//     }
//     printf("%d\n",root->data);
// }
// void max(struct node*root){
//     while(root->right!=NULL){
//         root=root->right;
//     }
//     printf("%d\n",root->data);
// }
// int main(){
//     struct node*root=NULL;
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         int key1;
//         scanf("%d",&key1);
//         root=insert(root,key1);
//     }
//     max(root);
//     min(root);
//     inorder_trav(root);
// }
# include <iostream>
using namespace std;
struct node {
    int data;
    struct node *left,*right;
};
struct node *newnode(int element){
    // node*t=new node();
    struct node *t=(struct node *)malloc((sizeof(struct node)));
    t->data=element;
    t->left=NULL,t->right=NULL;
}
struct node *insert(struct node *node,int key){
    if(node==NULL){
        return newnode(key);
    }
    else if (key<node->data){
            node->left=insert(node->left,key);
        }
    
    else if(key>node->data){
        node->right=insert(node->right,key);
    }
    return node;
    
}
void inorder_traver(struct node *root){
    if(root!=NULL){
        inorder_traver(root->left);
        cout<<root->data<<"\n";
        inorder_traver(root->right);
    }
}
int height(struct node *root){
    if(root==NULL){
        return 0;
    }
    else{
        int l_height=height(root->left);
        int r_height=height(root->right);
        if(l_height>r_height){
            return l_height+1;
        }
        else{
            return r_height+1;
        }
    }
    
}
int main(){
    struct node *node=NULL;
    int n;
    cin>>n;
    int key;
    for(int i=0;i<n;i++){
        cin>>key;
        node=insert(node,key);
        
    }
    // int count1=0,count2=0;
    // while(node->left!=NULL){
    //     node=node->left;
    //     count1++;
    // }
    // while(node->right!=NULL){
    //     node=node->right;
    //     count2++;
    // }
    // if(count1>count2){
    //     cout<<count1+2;
    // }
    // else{
    //     cout<<count2+2;
        
    // }
    // inorder_traver(node);
      int x=height(node)-1;
      cout<<x<<endl;
    
}