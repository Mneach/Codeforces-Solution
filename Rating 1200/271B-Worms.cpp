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

    int n;
    cin >> n;

    vi prefix(n);

    int prev = 0;
    for(int i = 0; i < n; i++){

        int number;
        cin >> number; 

        prev += number; 
        prefix[i] = prev;

    }

    int q;
    cin >> q;
    // cout << prefix[n - 1] << endl;
    for(int i = 0; i < q; i++){
        int number;
        cin >> number;

        auto answer = lower_bound(prefix.begin(), prefix.end(), number) - prefix.begin();

        cout << answer + 1 << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
