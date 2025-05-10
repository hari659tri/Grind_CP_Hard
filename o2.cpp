// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     ios::sync_with_stdio(false); 
//     cin.tie(0);

//     int t;

//     cin>>t;

//     while(t--){

//         int n,k;

//         cin>>n>>k;

//         vector<long long>arr(n);
//         for(auto &it:arr){
//             cin>>it;
//         }

//         sort(arr.begin(),arr.end());


//         if(n<=k){
//             cout<<0<<"\n";
//         }
//         else{
//             long long ans=arr[n-k-1]-arr[k]+1;
//             cout<<max(0LL,ans)<<"\n";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        // The number of houses Sasha can potentially buy is from arr[k] to arr[n-k-1]
        int result = arr[n - k - 1] - arr[k] + 1;

        // If the result is negative (i.e., no valid house positions), output 0
        cout << max(0, result) << "\n";
    }

    return 0;
}
