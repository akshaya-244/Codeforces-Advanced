#include <iostream>
using namespace std;
#include <vector>



void solve()
{
    int n;
    cin>> n;
    bool isSorted=true;
    vector<int> arr(n);
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        if(j>0 && (arr[j]<arr[j-1]))
        {
            isSorted=false;
        }
        if(arr[j] > n)
        {    
            cout<<"NO"<<endl;
            return;
        }
      


    }
      if(isSorted)
        {    cout<<"YES"<<endl;
            return;

        }
    
    if(arr[0] != 1 )
    {
        cout<<"NO"<<endl;
        return;
    }
   
    if(arr[0] == 1)
        {cout<<"YES"<<endl;
        return;}

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
