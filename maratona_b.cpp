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
    ll  x;    
    cin >> x;
    cout << -(x-1) << sp << x << ENDL;
    
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n-->0)
    solve();
     return 0;
}