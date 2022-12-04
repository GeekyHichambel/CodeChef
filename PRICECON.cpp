#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n,k;int sum=0;
	    cin >> n >> k;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin >> arr[i];
	        if (arr[i]>k){
	            sum+=arr[i]-k;
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
