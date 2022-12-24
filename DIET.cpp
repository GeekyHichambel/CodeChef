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

    void solve(int n,int k,int arr[]){
      int rem=0;bool flag = true;int ans;
      l(0,n){
        if ((arr[i]+rem)<k){
            flag = false;
            ans = i+1;
            break;
        }
        rem += arr[i]-k;
      }
      if (!flag){
        cout << "NO" << " " << ans << endl;
      }
      else{
        cout << "YES" << endl;
      }
    }

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        cout << fixed;
        ll t;
        cin >> t;
        while (t--){
            int n;int k;
            cin >> n >> k;
            int arr[n];
            l(0,n){
                cin >> arr[i];
            }
           solve(n,k,arr);
        }
    }
