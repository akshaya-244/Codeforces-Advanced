#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, k;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        bool isSorted=true;
        cin >> n >> k;
        vector<int> arr(n);
        
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            
        }

        
        if (k == 1)
        {
            
            for(int i=0;i<n-1;i++)
            {

                for(int i=0;i<n-1;i++)
                {
                    if(arr[i] > arr[i+1])
                        isSorted=false;
                }
       
                
                
            }
            if(isSorted == true)
            {
                cout<<"YES";
                
            }
            else
                cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
