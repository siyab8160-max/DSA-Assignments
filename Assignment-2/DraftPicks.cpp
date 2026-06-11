#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> arr(n,0);
        bool flag =true;
        int y=k;
        for(int i=0;i<y;i++)
        {
            if(flag == true)
            {
                arr[(i%n)]=arr[(i%n)]+k;
                k--;
            }
            else
            {   
                int x=n-(i%n)-1;
                arr[x]=arr[x]+k;
                k--;
            }
            if((i+1)%n==0)
            {
                if(flag==true){
                    flag=false;
                }
                else 
                flag=true;
  
            }
        }

        sort(arr.begin(),arr.end());
        cout<<arr[n-1]<<endl;
    }
}
