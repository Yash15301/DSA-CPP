#include<bits/stdc++.h>
#include "LL_reverse.h"
using namespace std;

void reverse (Node*&head){
    Node* C=head;
    Node* P=NULL;
    Node*N;
    while(C!=NULL){
        N=C->next;
        C->next=P;
        P=C;
        C=N;
    }
    head=P;
}


int main(){
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.insert(2,2);
    
    Node* head = l.begin();
    reverse(head);
    while(head!=NULL){
        cout << head->getData() << "->";
        head=head->next;
    }


}