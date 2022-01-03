#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &arr, int &n){
    priority_queue<int> pq;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        pq.push(-arr[i]);
        if(pq.size() > 10) pq.pop();
    }
    for (int i = 0; i < 10; i++)
    {
        ans.push_back(-pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans=solve(arr,n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
return 0;
}