#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left=right=NULL;
        }
};
// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

//pre order build. Root,left,right
Node* buildTree(){

    int d;
    cin >> d;

    if(d==-1){
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(Node *root){

    if(root==NULL){
        return ;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){

    Node *root = buildTree();
    cout <<"Preorder" << endl;
    printPreorder(root);
}