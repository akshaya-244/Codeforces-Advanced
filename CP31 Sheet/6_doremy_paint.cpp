#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

void solve()
{
    int n;
    cin>> n;
    
    unordered_map<int, int> mp;
    vector<int> arr(n);
    for(auto &it: arr)
    {
        cin>>it;
        mp[it]++;
    }
    if(n==1 || n==2)
    {
        cout<<"Yes"<<endl;
        return;
    }
    
    int s=mp.size();
    if(s==1)
    {
        cout<<"Yes"<<endl;
        return ;
    }
    if(s>2)
    {
        cout<<"No"<<endl;
        return;
    }
    int count=0,count1=0,i=0;
    if(s==2)
    {
        for(auto pair: mp)
        {
            if(i=0)
            {
                count=pair.second;
                i+=1;
            }
            else{
                count1=pair.second;
            }

        }
        if(count-count1 == 1 ||count1- count == 1 || count1 == count || count-count1 == 2 ||count1- count == 2 )
            {cout<<"Yes"<<endl;
            return;}
        cout<<"No"<<endl;
        return;
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
