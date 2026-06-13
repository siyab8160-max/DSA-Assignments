#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int h[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        sort(h,h+n);
        int ans = h[n-1]+1 - h[0];
        cout<<ans<<endl;
    }
}