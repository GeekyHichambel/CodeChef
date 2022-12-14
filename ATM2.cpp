#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string solve(int x,int y,int arr[]){
    string ans="";
    for (int i=0;i<x;i++){
        if (arr[i]>y){
            ans+='0';
        }
        else{
            y-=arr[i];
            ans+='1';
        }
    }
    return ans;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cout << solve(n,k,arr) << endl;
	}
	return 0;
}
