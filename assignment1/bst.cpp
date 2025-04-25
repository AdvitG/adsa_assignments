/* Write a program for a Binary Search Tree (BST) having functions for insertion, deletion, traversing(using pre order post order in order), maximum and minimum depth.*/

#include <iostream> 
using namespace std;

class node{

    int data; 
    node* left;
    node* right; 

    public: 
    node* creat_node(int a){
        node* newnode = new node;
        newnode->data=a; 
        newnode->left=nullptr;
        newnode->right=nullptr;
        return newnode;

    }
    node* insert(node* root, int a){
        if(root==nullptr){
            
            return creat_node(a);}
        if(root->data>a){
            root->left= insert(root->left,a);
        }
        if(root->data<a){
            root->right= insert(root->right,a);
        }
        return root;

    }

    node* findmin(node* root){
        if(root->left==nullptr){
            return root;
        }
        else{
            findmin(root->left);
        }
    }

    node* findmax(node* root){
        if(root->right==nullptr){
            return root;
        }
        else{
            findmax(root->right);
        }
    }



};

int main(){

    return 0;

} 
