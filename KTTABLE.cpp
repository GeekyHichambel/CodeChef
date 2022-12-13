#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solve(int n,int a[],int b[]){
       int count = 0;int last=0;
       for (int i=0;i<n;i++){
           if (b[i]<=(a[i]-last)){
               count++;
           }
           last = a[i];
       }
       return count;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr_1[n];
	    int arr_2[n];
	    for (int i=0;i<n;i++){
	        cin >> arr_1[i];
	    }
	    for (int i=0;i<n;i++){
	        cin >> arr_2[i];
	    }
	    int ans = solve(n,arr_1,arr_2);
	    cout << ans << endl;
	}
	return 0;
}
