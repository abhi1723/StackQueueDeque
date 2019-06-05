#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void pushElementAtBottomOfStack(stack<char> &s,char elementToBeInsertedAtBottom){
    if(s.empty()) {
        s.push(elementToBeInsertedAtBottom);
        return;
    }
    char character=s.top();
    s.pop();
    pushElementAtBottomOfStack(s,elementToBeInsertedAtBottom);
    s.push(character);
}
void displayStack(stack<char> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    cout<<"The original stack is "<<endl;
    displayStack(s1);
    pushElementAtBottomOfStack(s1,'e');
    cout<<"The new stack after inserting the element at bottom of stack is "<<endl;
    displayStack(s1);
    return 0;
}
