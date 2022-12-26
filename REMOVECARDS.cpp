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
    
    #define elif else if
    #define ll long long int
    #define ld long double
    #define l(a,b) for(int i=a;i<b;i++)
    #define l2(a,b) for(int j=a;j<b;j++)
    #define it7 int a,b,c,d,e,f,g; cin>>a>>b>>c>>d>>e>>f>>g;
    #define it6 int a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    #define it5 int a,b,c,d,e; cin>>a>>b>>c>>d>>e;
    #define it4 int a,b,c,d; cin>>a>>b>>c>>d;
    #define it3 int a,b,c; cin>>a>>b>>c;
    #define it2 int a,b; cin>>a>>b;
    #define it1 int a; cin>>a;

    const int MAX_N = 1e5 + 5;
    const ll MOD = 1e9 + 7;
    const ll INF = 1e9;
    const ld EPS = 1e-9;

    void solve(int n,int arr[]){
     int count = 0;int tmp = 0;
     l(0,n){
      tmp = 0;
      l2(0,n){
          if (arr[i]==arr[j]){
              tmp++;
          }
          count=max(tmp,count);
      }
     }
     cout << n-count << endl;
    }

    int main(){
      ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        cout << fixed;
        ll t;
        cin >> t;
        while (t--){
          it1;
          int arr[a];
          l(0,a){
            cin >> arr[i];
          }
          solve(a,arr);
        }
    }
