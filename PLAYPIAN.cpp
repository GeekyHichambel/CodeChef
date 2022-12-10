#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--){
         string s;
         cin >> s;bool flag = true;
         int n = s.length();
         for (int i=0;i<n;i+=2){
             if (s[i]==s[i+1]){
                 flag = false;
                 break;
             }
         }
         if (flag){
             cout << "yes" << endl;
         }
         else{
             cout << "no" << endl;
         }
     }
  return 0;
}
