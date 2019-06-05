#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void displayStack(stack<char> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void pushAtBottomOfStack(stack<char> &s,char characterToBeInsertedAtBottomOfStack){
    if(s.empty())
        {
            s.push(characterToBeInsertedAtBottomOfStack);
            return;
        }
    char character=s.top();
    s.pop();
    pushAtBottomOfStack(s,characterToBeInsertedAtBottomOfStack);
    s.push(character);
}
void reverseTheStack(stack<char> &s){
    if(s.empty())
        return;
    char character=s.top();
    s.pop();
    reverseTheStack(s);
    pushAtBottomOfStack(s,character);
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
    reverseTheStack(s1);
    cout<<"The new reversed stack is "<<endl;
    displayStack(s1);
    return 0;
}
