#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
 int t;
 cin >> t;
 while (t--){
     int N;
     cin >> N;
    string S = "";
    cin>>S;
    int freq[26];
    
    for(int i=0;i<26;i++) freq[i] = 0;
    for(int i=0;i<S.size();i++){
        freq[S[i] - 'a' ]++;
    } 
    bool flag = false;
    for(int i=0;i<26;i++) {
        if(freq[i]%2!=0) {
            cout<<"NO"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"YES"<<endl;
 }
	return 0;
}
