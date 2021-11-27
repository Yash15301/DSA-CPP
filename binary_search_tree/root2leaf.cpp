#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int key;
    Node *left;
    Node *right;

    Node(int key){
        this->key = key;
        left=right=NULL;
    }
};

Node* insert(Node *root, int key){

    if(root==NULL){
        return new Node(key);
    }

    if(key < root->key){
        root->left = insert(root->left, key);
    }

    else{
        root->right = insert(root->right, key);
    }
    
    return root;

}

bool search(Node *root, int key){
    if(root==NULL){
        return false;
    }
    if(root->key == key){
        return true;
    }
    if(key < root->key){
        return search(root->left, key);
    }
    return search(root->right, key);
    
}

void printInorder(Node *root){
    if(root==NULL){
        return ;
    }

    printInorder(root->left);
    cout << root->key << ",";
    printInorder(root->right);
}

void printRoot2LeafPaths(Node *root, vector<int> &path){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        //print vector
        for(int node:path){
            cout << node << "->";
        }
        cout << root->key<<" ";
        cout << endl;
        return;
    }

    path.push_back(root->key);
    printRoot2LeafPaths(root->left,path);
    printRoot2LeafPaths(root->right,path);
    path.pop_back();
    return;
}

int main(){

    Node *root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x: arr){
        root = insert(root,x);
    }
    printInorder(root);
    
    vector<int> path;
    printRoot2LeafPaths(root,path);
    return 0;
}