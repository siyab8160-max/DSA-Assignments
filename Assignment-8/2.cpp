#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>m>>n;
        while(n>m)
        {
            n=n-3;
            m=m-1;
            if(m==n)
            break;
        }
        cout<<m-n<<endl;
    }
}
