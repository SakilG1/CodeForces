#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t=1;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> ans(n);
        for(long long i=0; i<n; i++) cin>>ans[i];
        sort(ans.begin(), ans.end());
        cout<<max(ans[0]*ans[1], ans[n-1]*ans[n-2]) <<endl;
    }
}
