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
    int x;
    cin >> x;
    string caso1 = {"I hate that "};
    string caso2 = {"I love that "};
    string str;
    for(int i = 1; i <= x; i++){
        if(i%2 != 0){
            str.append(caso1);
        }else{
            str.append(caso2);
        }
            //I hate that I love that I hate it
    }
    for(int i = 0; i < 5; i++){
        str.pop_back();
    }
    str.append("it");
    cout << str;
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