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

Node* LevelOrderBuild(){
    int d;
    cin >> d;
    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *current = q.front();
        q.pop();

        int c1,c2;
        cin >> c1 >> c2;

        if(c1!=-1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new Node(c2);
            q.push(current->right);
        }
    }

    return root;
}

bool isSymmetric(Node *root1, Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }

    if(root1 && root2 && root1->data == root2->data){
        return isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
    }
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    cout << isSymmetric(root, root);
    return 0;
}