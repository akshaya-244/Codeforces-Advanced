#include <iostream>
using namespace std;
#include <vector>
#include <climits>

long long solve(int n, int k)
{
    long long ans=-1;
    vector<long long> arr(n);
    long long sumElements=0;
    long long maxi=LONG_MIN;
    for(auto &it: arr)
    {
        cin>> it;
        sumElements+=it;
        maxi=max(maxi, it);
    }
    if(n == k)
    {
        return maxi;
    }
    // cout<<sumElements;
    bool switchC=false;
    long long left=0,right=sumElements, mid;
    while(left <= right)
    {
        mid=(left+right)/2;
        cout<<mid<<endl;
        long long count=1, sumSubArray=0;
        for(auto it: arr)
        {   
            if(it > mid)
            {
                switchC=true;
                break;
            }
            if(it+ sumSubArray <= mid)
            {
                sumSubArray+=it;
            }
            else{
                cout<<"Sumsubarray: "<<sumSubArray<<endl;
                sumSubArray=it;
                count+=1;
                cout<<"Count: "<<count<<endl;
            } 
        }
        cout<<"Count"<<count;
         if(count == k )
        {
            cout<<"Ans: "<<ans<<endl;
            ans=mid;
            right=mid-1;
        }
        else if(switchC || count+1 > k)
        {
            switchC=false;
            left=mid+1;
        }
        else {
            right=mid-1;

        }
    }
    return ans;
}


int main()
{
    long long n, k;
    cin>>n>>k;
    
    cout<<solve(n, k);
}