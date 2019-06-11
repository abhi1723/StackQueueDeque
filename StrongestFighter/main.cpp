#include <iostream>
#include <deque>
#define lint long long int
using namespace std;

int main()
{
    lint n;
    cin>>n;
    lint a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    lint k;
    cin>>k;
    deque<int> q(k);
    lint i=0;
    for(;i<k;i++){
        while(!q.empty() && a[i]>a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    //cout<<"q front is "<<q.back()<<endl;
    for(;i<n;i++){
        cout<<a[q.front()]<<" ";
       // Remove the elements that are currently not a part of the window.
       while(!q.empty() &&  q.front()<=(i-k)){
        q.pop_front();
       }

       //Remove the elements in the deque which are not useful
       while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }

        //Add the new element (Expansion)

        q.push_back(i);
    }
    cout<<a[q.front()];
    return 0;
}
