#include<bits/stdc++.h>
using namespace std;

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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

// postorder build. left,right,root
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

void PrintPostorder(Node *root){

    if(root==NULL){
        return;
    }
    PrintPostorder(root->left);
    PrintPostorder(root->right);
    cout << root->data <<" ";
    
}


int main(){

    Node *root = buildTree();
    cout << "Postorder" << endl;
    PrintPostorder(root);
    cout << endl;
}