#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool solve(int n,string s){
    int count = 0;bool flag = true;
    for (int i=0;i<n;i++){
        if (s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            count++;
        }
        else{
            count=0;
        }
        if (count==4){
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    bool ans = solve(n,str);
	    if (ans){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
