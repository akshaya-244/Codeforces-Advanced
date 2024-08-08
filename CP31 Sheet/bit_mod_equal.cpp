#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    
    long long x=1;
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(auto &it: arr)
    {
        cin>> it;
    }

    for(int i=0;i<63;i++)
    {
        bool flag1=false, flag2=false;
        for(auto it: arr)
        {
            if(it & (x  <<i) )
            {
                flag1=true;
            }
            else {
                
                flag2=true;}
        }
        if(flag1 && flag2)
        {
            cout<<(x<<(i+1))<<endl;
            return;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}