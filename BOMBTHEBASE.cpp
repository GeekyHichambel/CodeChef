#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];int ans=0;
	    for (int i=0;i<n;i++){
	        cin >> arr[i];
	        if (arr[i]<x){
	            ans=i+1;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
