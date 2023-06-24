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

void solve(){
    int n;
    cin >> n;

    if(n % 2 == 0) {
        int result = pow(2 , n / 2);

        cout << result << endl;
    }
    else cout << 0 << endl;
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
