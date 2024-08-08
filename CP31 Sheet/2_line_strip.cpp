#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        
    }
    if(n==1)
    {
        int ans=max(arr[0], (x - arr[0])*2);
        cout<<ans<<endl;
    }
    else{
        int maxi=arr[0];
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                maxi=max(maxi,max(arr[i] - arr[i-1],(x-arr[i]) * 2));
            }
            else
            {
                maxi=max(maxi, arr[i] - arr[i-1]);
            }
        }
        cout<<maxi<<endl;
    }
        
    
    




}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}