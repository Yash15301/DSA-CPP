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

void inorder(Node*root, vector<int> &v){
    if(root==NULL){
        return ;
    }
    if(root->left){
        inorder(root->left, v);
    }
    v.push_back(root->data);
    if(root->right){
        inorder(root->right, v);
    }
}

Node *help(Node *root){
    if(root==NULL){
        return NULL;
    }
    if(root->right){
        root->right=help(root->right);
    }
    if(root->left){
        root->left=help(root->left);
    }
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)){
        if(root->left){
            root = root->left;
        }
        else{
            root = root->right;
        }
        root = help(root);
    }
    return root;
}

vector<int> removeHalfNodes(Node*root){
    root = help(root);
    vector<int> v;
    inorder(root, v);
    return v;
}

int main(){

    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);
    vector<int> T=removeHalfNodes(root);
    for(auto x:T){
        cout << x << " ";
    }
    return 0;
}