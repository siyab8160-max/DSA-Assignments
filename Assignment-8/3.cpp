#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,k;cin>>n>>k;
	    int a[n];
	    int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                if((a[i]+a[j]+sum)/2>k)
                ans++;
            }
        }
        cout<<ans/2<<endl;
	}

}
