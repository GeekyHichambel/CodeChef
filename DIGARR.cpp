#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll d;
        cin >> d;
        string s;
        cin >> s;
            bool flag = false;
            for(ll i=0;i<d;i++){
                if (s[i]== '0'||s[i]== '5'){
                    flag = true;
                    break;
                }
            }
            if (flag==true){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
	return 0;
}
