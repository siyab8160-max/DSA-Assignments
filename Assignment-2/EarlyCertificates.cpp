#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string a;cin>>a;
        string b;cin>>b;
        int x=min(n,m);
        string ans="";
        for(int i=0;i<x;i++)
        {
            if(a[i]==b[i])
            ans+=a[i];
            else
            break;
        }
        cout<<ans<<endl;
    }
}
