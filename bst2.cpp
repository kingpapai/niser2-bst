#include <iostream>
using namespace std;
class node{
    public :
    int data;
    node *parent;
    node *left;
    node *right;
    
    //constructor
    node(){
        
        data=0;
        parent=left=right=NULL;
    }
};
class BSTree {
    public:
    node *root;
    // constructor
    BSTree(){
        root=NULL;
    }
    void add(int x)
    {node *temp=new node;
    temp->data=x;
    temp->parent=temp->left=temp->right=NULL;
    
    if (root==NULL){
        root=temp;
    }
    else{
        node *curr;
        curr=root;
        while(1){
            if(x<curr->data){
                if(curr->left==NULL){
                    curr->left=temp;
                    temp->parent=curr;
                    break;
                }
                else{curr=curr->left;}
            }
            else if (x>curr->data){
                if(curr->right==NULL){
                    curr->right=temp;
                    temp->parent=curr;
                    break;
                }
                else{curr=curr->right;}
            }
        }
        
    }
    
}
void display(node *curr){
    if(curr==NULL)
    return;
    else{
        display(curr->left);
        cout<<curr->data <<", ";
        display(curr->right);
    }
}
              
              
};

int main() {
    BSTree a;
    a.add(7);
    a.add(2);
    a.add(15);
    a.add(1);
    a.add(5);
    a.add(17);
    a.add(10);
    a.add(4);
    a.add(18);
    a.add(9);
    a.display(a.root);

    return 0;
}
