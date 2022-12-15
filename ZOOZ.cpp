#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ll long long int
#define ld long double
#define l(i,a,b) for(int i=a;i<b;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve(int a){
   string s="";
   if (a%2==0){
      s+='1';
      for (int i=0;i<a-2;i++){
          s+='0';
      }
      s+='1';
      cout << s << endl;
   }
   else{
       bool one = false;
       for (int i=0;i<a;i++){
           if (!one){
               s+='0';
               one = true;
           }
           else{
               s+='1';
               one = false;
           }
       }
       cout << s << endl;
   }
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << fixed;
    ll t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
    	solve(n);
    }
}
