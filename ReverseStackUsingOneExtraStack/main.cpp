#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void transfer(stack<char> &s1,stack<char> &s2,int n){
    for(int i=0;i<n;i++){
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
    stack<char> s1,s2;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    cout<<"The original stack is "<<endl;
    displayStack(s1);
    int n=s1.size();
    for(int i=0;i<n;i++){
        char a=s1.top();
        s1.pop();
        transfer(s1,s2,n-i-1);
        s1.push(a);
        transfer(s2,s1,n-i-1);
    }
    cout<<"The new reversed stack is "<<endl;
    displayStack(s1);

    return 0;
}
