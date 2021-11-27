#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;

public:
    node(int d):data(d),next(NULL){};

    int getData(){
        return data;
    }

};

class ll{

private:
    node *head;
    node *tail;

public:
    ll(){
        head=NULL;
        tail=NULL;
    }
    node *begin(){
        return head;
    }

    void push_back(int data){
        if(head==NULL){
            node *temp = new node(data);
            head=tail=temp;
        }
        else{
            node *temp = new node(data);
            tail->next = temp;
            tail = temp;
        }
    }
    void push_front(int data){
        if(head==NULL){
            node *temp = new node(data);
            head=tail=temp;
        }
        else{
            node *temp = new node(data);
            node *next = new node(data);
            temp->next=head;
            head = temp;
        }
    }





















};

int main(){
    ll ll;
    ll.push_back(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);

    node *head = ll.begin();
    while(head!=NULL){
        cout << head->getData() << "->" ;
        head=head->next;
    }
    return 0;

}