#include "bits/stdc++.h"
#define sp " "
#define ENDL "\n"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using hp = priority_queue<int>;
using fila = queue<int>;


void solve()
{
    int n, r = 0, temp;
    cin >> n;
    int x[n-1];
    for(int i = 0; i < (n-1); i++){
        cin >> x[i];
    }
    sort(x, x+n-1);
    for(int i = 1; i < n; i++){
        if(i != x[i - 1]){
            cout << i << ENDL;
            r = 1;
            break;
        }
    }
    if(r == 0){
        cout << n << ENDL;
    }
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    // int n;
    // cin >> n;
    // while (n-->0)
        solve();
     return 0;
}