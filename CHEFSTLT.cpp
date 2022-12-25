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
    #define l(a,b) for(int i=a;i<b;i++)

    const int MAX_N = 1e5 + 5;
    const ll MOD = 1e9 + 7;
    const ll INF = 1e9;
    const ld EPS = 1e-9;

    void solve(string str1,string str2){
      int max = str1.size();int count = 0;int min = 0;
      l(0,max){
        if (str1[i]!='?'&&str2[i]!='?'){
         if (str1[i]==str2[i]){
          count++;
         }
         else if (str1[i]!=str2[i]){
           min++;
         }
      }
    }
      cout << min << " " << max-count << endl;
    }

    int main(){
      ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        cout << fixed;
        ll t;
        cin >> t;
        while (t--){
          string str1;
          string str2;
          cin >> str1;
          cin >> str2;
          solve(str1,str2);
        }
    }
