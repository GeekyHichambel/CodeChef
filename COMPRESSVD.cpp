#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int count=0;
	    if (n==1){
	        cout << 1 << endl;
	    }
	    else{
	        for (int i=0;i<n-1;i++){
	            if (arr[i]==arr[i+1]){
	            count++;
	            }
	        }
	        cout << n-count << endl;
	    }
	}
	return 0;
}
