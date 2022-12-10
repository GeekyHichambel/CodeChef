#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    int b[n];int sum_a=0;int sum_b=0;int max_a=0;int max_b=0;
	    for (int i=0;i<n;i++){
	        cin >> a[i];
	        sum_a+=a[i];
	        if (a[i]>max_a){
	            max_a = a[i];
	        }
	    }
	    sum_a-=max_a;
	    for (int i=0;i<n;i++){
	        cin >> b[i];
	        sum_b+=b[i];
	        if (b[i]>max_b){
	            max_b = b[i];
	        }
	    }
	    sum_b-=max_b;
	    if (sum_a<sum_b){
	        cout << "Alice" << endl;
	    }
	    else if (sum_b<sum_a){
	        cout << "Bob" << endl;
	    }
	    else if(sum_a==sum_b){
	        cout << "Draw" << endl;
	    }
	}
	return 0;
}
