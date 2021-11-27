#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int data){

    if(s.empty()){
        s.push(data);
        return;
    }
    int temp = s.top();
    //cout << "Value of temp in insert at bottom: " << temp << endl;
    s.pop();
    insertAtBottom(s,data);
    //cout << "Pushing " << temp << endl;
    s.push(temp);
}
void reverse(stack<int> &s){

    if(s.empty()){
        return;
    }

    int t = s.top();
    //cout << "Value of t in reverse func: " << t << endl;
    s.pop();
    reverse(s);
    //cout << "Sending " << t << " to IAB" << endl;
    insertAtBottom(s,t);
}

int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverse(s);
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}
