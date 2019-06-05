#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void transfer(stack<char> &s1,stack<char> &s2){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
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
    stack<char> s1,s2,s3;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    cout<<"The original stack is "<<endl;
    displayStack(s1);
    transfer(s1,s2);
    transfer(s2,s3);
    transfer(s3,s1);
    cout<<"The new stack is "<<endl;
    displayStack(s1);
    return 0;
}
