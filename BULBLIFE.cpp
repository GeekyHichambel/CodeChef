#include <iostream>
using namespace std;

int main() {
	    int t;
	    cin >> t;
	    while (t--){
	        int n,x;
	        cin >>  n >> x;
	        int arr[n-1];int sum=0;
	        for(int i=0;i<n-1;i++){
	            cin >> arr[i];
	            sum+=arr[i];
	        }
	        int a=(x*n)-sum;
	        if (a<0){
	            cout << 0 <<endl;
	        }
	        else{
	            cout << a << endl;
	        }
	    }
	return 0;
}
