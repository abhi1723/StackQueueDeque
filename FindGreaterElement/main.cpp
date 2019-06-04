#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q,q2,q3;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        q.push(data);
    }
    q2=q;
    int lenOfQueue=q.size();
    int i=0;
    while(i<lenOfQueue){
        q=q2;
        int noToBeFound=q.front();
        q.pop();
        q.push(noToBeFound);
        q2=q;

    bool checkIfGreaterNumberFound=false;
    while(!q.empty()){
        if(q.front()>noToBeFound){
            checkIfGreaterNumberFound=true;
            break;
        }
        q.pop();
    }
    if(checkIfGreaterNumberFound){
        cout<<q.front()<<" ";
    }
    else{
        cout<<"-1"<<" ";
    }
    i++;
    }
    return 0;
}
