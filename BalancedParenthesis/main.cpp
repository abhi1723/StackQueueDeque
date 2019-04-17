#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    string word;
    cin>>word;
    stack<char> s;
    int i=0;
    while(word[i]!='\0'){
        if(word[i]=='(' || word[i]==')' || word[i]=='['|| word[i]==']'|| word[i]=='{'|| word[i]=='}'){

            if(word[i]=='(' || word[i]=='{' || word[i]=='['){
                s.push(word[i]);
                 //cout<<"current letter is "<<word[i]<<endl;
            }
            else {
                //cout<<"s top is "<<s.top()<<endl;
                 if((s.top()=='(' && word[i]==')')  || (s.top()=='{' && word[i]=='}') || (s.top()=='[' && word[i]==']') ){
                    s.pop();
                }
                else if (s.top()==word[i]){
                    s.push(word[i]);
                }

            }
        }
        i++;
    }
   // cout<<"s size is "<<s.size()<<endl;
    /*i=0;
    if(word.length()==1 &&(word[i]!='(' && word[i]!=')' && word[i]!='['&& word[i]!=']'&& word[i]!='{' && word[i]!='}')){
         cout<<"Yes";
    }
    else*/ if(s.size()==0){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}
