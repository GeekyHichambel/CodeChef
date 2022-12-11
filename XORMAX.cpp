#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin >> t;
	while(t--){
	    string a,b;
	    cin >> a;ll count1_a=0;
	    cin >> b;ll count1_b=0;
	    ll len=a.length();
	    for (ll i=0;i<len;i++){
	        if (a[i]=='1'){
	            count1_a++;
	        }
	        if (b[i]=='1'){
	            count1_b++;
	        }
	    }
	    ll count0_a = len - count1_a;
	    ll count0_b = len - count1_b;
	    
	    ll fin_count = min(max(count1_a,count1_b),max(count0_a,count0_b))+min(min(count1_a,count1_b),min(count0_a,count0_b));
	    string ans;
	    for (int i=0;i<fin_count;i++){
	        ans+='1';
	    }
	    for (int i=fin_count;i<len;i++){
	        ans+='0';
	    }
	    cout << ans << endl;
	}
	return 0;
}
