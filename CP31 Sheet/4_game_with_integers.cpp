#include <iostream>
using namespace std;
#include <vector>



void solve()
{
    int n;
    cin>> n;
    if(n % 3 ==0)
    {
        cout<<"Second";
    }
    else{
        cout<<"First";
    }
    cout<<endl;
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