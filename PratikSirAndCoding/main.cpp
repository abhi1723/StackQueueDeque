#include <iostream>
#include <bits/stdc++.h>
#define lint long long int
using namespace std;

int main()
{
    string result="";
    stack<lint> modules;
    lint noOfQueries,typeOfQuery,priceOfModule;
    cin>>noOfQueries;
    for(lint i=1;i<=noOfQueries;i++){
        cin>>typeOfQuery;
        if(typeOfQuery==1){
            if(!modules.empty()){
                lint priceOfModule=modules.top();
                modules.pop();
                string str=to_string(priceOfModule);
                result=result+str+"\n";
            }
            else{
                result=result+"No Code "+"\n";
            }
        }
        else{
            cin>>priceOfModule;
            modules.push(priceOfModule);
        }
    }
    cout<<result;
    return 0;
}
