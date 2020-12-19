#include <bits/stdc++.h>
#include <iomanip>
#define lli long long int
#define mod 1000000009
#define pb push_back
#define pp pop_back
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin >> t;
    
    while(t--){
        lli n, mx = -1e9;
        cin >> n;
        
        vector<lli> v(n);
        
        for(lli i = 0; i < n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        sort(v.begin(), v.end(), [](lli x, lli y) {return abs(x) > abs(y);});
        
        if(mx<0){
            cout << v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5] << endl;
        }
        else{
            lli pro = v[0]*v[1]*v[2]*v[3]*v[4];
            
            for(lli i = 5; i < n; i++){
                //lli temp = a[i];
                for(lli j = 0; j < 5; j++){
                    lli temp = v[i];
                    for(lli k = 0; k < 5; k++){
                        if(k != j){
                            temp *= v[k];
                        }
                    }
                    pro = max(pro, temp);
                }
            }
            // for(lli i = 0; i < n; i++){
            //     cout << v[i] << " ";
            // }
            cout << pro << endl;
        }
    }
    
    return 0;
}
