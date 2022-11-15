#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int X;int Y;
        cin >> X>>Y;
            if (Y>X){
                cout << X <<endl;
            }
            else{
            int f=X/Y;
            int r=X%Y;
            f=f+r;
                cout << f <<endl;
            
        }
    }
}
