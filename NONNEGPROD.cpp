#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    int arr[n];int count=0;bool flag = false;
	    for (int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for (int i=0;i<n;i++){
	        if (arr[i]<0){
	            count++;
	        }
	        else if (arr[i]==0){
	            flag = true;
	            break;
	        }
	    }
	    if (count%2==0||flag==true){
	        cout << 0 << endl;
	    }
	    else{
	        cout << 1 << endl;
	    }
	}
}
