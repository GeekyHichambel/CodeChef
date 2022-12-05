#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int arr[n];int f=0;int l;
            for (int i=0;i<n;i++){
                cin >> arr[i];
                if (i==n-1){
                    l = arr[i];
                    f = arr[0];
                }
            }
            int temp = f+l;
            for (int i=0;i<n-1;i++){
                temp  = max(temp,arr[i]+arr[i+1]);
            }
            cout << temp << endl;
        }
	return 0;
}
