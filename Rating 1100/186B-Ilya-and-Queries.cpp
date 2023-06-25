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
    string s;
    cin >> s;

    vi arr(s.length(), 0);

    for(int i = 1; i < arr.size(); i++){
        int current = arr[i - 1];

        if(s[i] == s[i - 1]) current++;

        arr[i] = current;
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++){
        int l , r;
        cin >> l >> r;

        cout << arr[r - 1] - arr[l - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
