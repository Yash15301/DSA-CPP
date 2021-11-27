#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){

    int d;
    cin >> d;

    if(d==-1){
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;

};



/*int sumBT(Node *root){
    queue<Node*> q;
    int sum = 0;
    q.push(root);
    sum = q.front()->data;
    while(!q.empty()){
        if(q.front()->left){
            q.push(root->left);
        }
        if(q.front()->right){
            q.push(root->right);
        }
       
        q.pop();
        sumBT(q.front());
    }
    return sum;

}*/
int sumBT(Node*root){
    if(root==NULL){
        return 0;
    }
    else{
        return (root->data + sumBT(root->left) + sumBT(root->right));
    }
}

int main(){

    Node *root = buildTree();
    int sum = sumBT(root);
    cout << sum;
    
}