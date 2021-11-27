#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> books;
    books.push("book1");
    books.push("book2");
    books.push("book3");
    books.push("book4");

    while(!books.empty()){
        cout << books.top() << endl;
        books.pop();
    }

    return 0;
}