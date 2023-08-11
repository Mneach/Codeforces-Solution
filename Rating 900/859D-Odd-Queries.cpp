#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpi;

#define canRunAnswer(x) cout << "Answer : " << x << endl;
#define all(x) x.begin(), x.end()
// #define endl "\n";

ull maxULL(ull a, ull b)
{
    return (a > b) ? a : b;
}

ull minULL(ull a, ull b)
{
    return (a > b) ? b : a;
}

ll maxLL(ll a, ll b)
{
    return (a > b) ? a : b;
}

ll minLL(ll a, ll b)
{
    return (a > b) ? b : a;
}

double maxDL(double a, double b)
{
    return (a > b) ? a : b;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    vll arr(n + 1, 0);
    ll sum = 0;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    } 

    for(int i = 0; i < q; i++){
        int l, r, k;
        cin >> l >> r >> k;

        int currentIndex = 0;

        ll answer = arr[arr.size() - 1];
        ll temp = arr[r] - arr[l - 1];

        answer = answer + abs(temp - ((r - l) + 1) * k);
        // cout << answer << endl;

        if(answer % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
