#include<bits/stdc++.h>
#include "list2.h"
using namespace std;
//linear search
bool search(Node *head, int key){
    Node *temp =head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}

//recursive search
bool searchRecursive(Node *head, int key){
    if(head==NULL){
        return false;
    }
    // check at head, remaining linked list
    if(head->data==key){
        return true;
    }
    else{
        return searchRecursive(head->next, key);
    }
}

int main(){
    List l;
    Node *head=NULL;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.insert(2,2);

    int key;
    cin >> key;
    if(searchRecursive(head,key)){
        cout << "ELement Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}