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
    string temp;
    cin >> temp;
    for(int i = 0; i < temp.size(); i++){
        for(int j = i; j < temp.size(); j++){
            if(temp[i] + temp[j] == 'A' + 'B'){
                temp[i] = 'n';
                temp[j] = 'n';
                break;
            }
            else if(temp[i] == 'B' && temp[j] == 'C' || temp[j] == 'B' && temp[i] == 'C'){
                temp[i] = 'n';
                temp[j] = 'n';
                break;
            }
        }
    }
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] != 'n'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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