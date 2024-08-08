#include <iostream>
using namespace std;
#include <vector>


void solve()
{
    int n;
    cin>> n;
    vector<char> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int count=0;
    int finalCount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == '#')
        {
            count=0;
        }
        else if(arr[i] == '.'){
            count+=1;
            finalCount+=1;
            if(count ==3)
            {
                cout<<count-1<<endl;
                break;
            }
        }
    }
    if(count <3)
        cout<<finalCount<<endl;
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