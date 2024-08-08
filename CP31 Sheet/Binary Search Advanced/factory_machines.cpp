#include <iostream>
using namespace std;
#include <vector>
#include <climits>

bool f(int mid, vector<long long> arr, int p)
{
    long long noOfProducts=0, sumProd=0;
    for(auto it: arr)
    {
        if(it > mid || it == 0)
            return false;
        if (noOfProducts + ( mid / it )>= p)
            noOfProducts+=mid / it;
        else {
            return false;
        }
    }
    return true;
}
long long solve(long long n, long long p)
{
    vector<long long> arr(n);
    long long maxi=LONG_MIN;
    for(auto it: arr)
    {
        cin>>it;
        maxi=max(maxi, it);

    }


    long long s= 0, e=maxi*p, ans=0, mid;

    while(s<=e)
    {
        mid= s + (e-s)/2;
        cout<<"Mid: "<<mid;
        if(f(mid, arr, p))
        {
            ans=mid;
            e=mid-1;
        cout<<"Ans: "<<ans<<endl;
        cout<<"E: "<<e<<endl;


        }
        else{
            s=mid+1;
        }
    }
    return ans;
    
}


int main()
{
    long long n, p;
    cin>>n>>p;
    
    
    cout<<solve(n, p);
}