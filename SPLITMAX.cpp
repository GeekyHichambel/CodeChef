#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;


int main() {
	 ll t;
	 cin >> t;
	 while(t--){
	     ll N;
	     cin >>N;
	     ll arr[N];ll sum=0;
	     for (ll i=0;i<N;i++){
	         cin >> arr[i];
	         sum+=arr[i]%mod;
	     }
	     
	     ll ans=sum*(sum-1);
	     cout << ans%mod <<endl;
	 }
	return 0;
}
