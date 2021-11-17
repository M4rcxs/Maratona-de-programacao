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
    int cont = 0;
    int cont2 = 0;
    string temp;
    cin >> temp;
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] == 'A' || temp[i] == 'C'){
            cont++;
        }else{
            cont2++;
        }
    }
    cout << (cont == cont2? "YES": "NO") << "\n";
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