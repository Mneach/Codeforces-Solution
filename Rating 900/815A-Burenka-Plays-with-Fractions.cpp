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
    ll a, b , c , d;

    cin >> a >> b >> c >> d;

    ll left = a * d;
    ll right = b * c;
    
    if(a == 0 && c == 0) cout << 0 << endl;
    else if(a == 0 || c == 0) cout << 1 << endl;
    else if((a / b == c / d) && ( a % b == 0 && c % d == 0)) cout << 0 << endl;
    else if(left == right) cout << 0 << endl;
    else if(left > right && left % right == 0) cout << 1 << endl;
    else if(right > left && right % left == 0) cout << 1 << endl;
    else cout << 2 << endl;
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
