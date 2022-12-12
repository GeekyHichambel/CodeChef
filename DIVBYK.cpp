#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long int

bool solve(int n,ll k){
    ll arr[n];bool flag = false;
        for (ll i=0;i<n;i++){
            cin >> arr[i];
            if (arr[i]%k==0){
                flag = true;
            }
        }
        if (!flag){
            vector<ll> fact;
            for (auto &i:arr){
                if (k%i==0){
                    fact.push_back(i);
                }
            }
            ll rem=1;
            for (auto &i:arr){
                rem=(rem*i)%k;
            }
            if (rem==0){
                flag = true;
            }
        }
    return flag;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;ll k;
        cin >> n >> k;
        bool ans=solve(n,k);
        if (ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
