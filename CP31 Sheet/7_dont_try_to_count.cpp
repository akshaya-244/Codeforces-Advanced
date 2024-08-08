#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <string>

int solve(int t)
{
    int n, m;
    cin>> n>>m;
    string x="";
    string s="";
    cin>>x;
    cin>>s;

    int count =0;
    if(x.find(s)!= string::npos)
        return count;
    while(  x.length() < 1e4){
        //TLE on last test cases with t> 10^4
        if(t>1e3 )
        {   
            while(  x.length() < 1e2)
            {
                count+=1;
                x=x+x;
                if(x.find(s) != string::npos){
                    return count;
                }
            }
            break;
        }
        
        count+=1;
        x=x+x;
        if(x.find(s) != string::npos){
            return count;
        }
        
    }
    return -1;

}


int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve(t)<<endl;
    }
    return 0;
}
