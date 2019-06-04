#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Ma");
    s.push("Papa");
    s.push("Didi");
    s.push("Abhishek");
    while(!s.empty()){
        cout<<s.top()<<endl;;
        s.pop();
    }
    return 0;
}
