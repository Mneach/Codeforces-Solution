#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpi;

#define checkAnswer(x)  cout << "Answer : " << x << endl;
#define all(x) x.begin(), x.end()
// #define endl "\n";

ull maxULL(ull a , ull b){
    return (a > b) ? a : b;
}

ull minULL(ull a , ull b){
    return (a > b) ? b : a;
}

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

ll minLL(ll a , ll b){
    return (a > b) ? b : a;
}

double maxDL(double a , double b){
    return (a > b) ? a : b;
}

void solve(){
    int n, m, k;
 
    cin >> n >> m >> k;
 
    int x1, y1;
 
    cin >> x1 >> y1;
 
    bool check = false;
 
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;  
        
        int temp = abs(x1 - x) + abs(y1 - y);
        if(temp % 2 == 0) check = true;
    }
 
    if(check) cout << "NO" << endl;
    else cout << "YES" << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
