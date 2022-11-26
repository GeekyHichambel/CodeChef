#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
        
int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    ll arr[n][n];
       for (ll i=0;i<n;i++){
       for (ll j=0;j<=i;j++){
        cin >> arr[i][j];
       }
      }
	 for  (ll i=n-2;i>=0;i--){
         for (ll j=0;j<=i;j++){
            arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
        }
     }
     cout << arr[0][0] <<endl;
  }
}
