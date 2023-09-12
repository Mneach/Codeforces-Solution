#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpi;

#define f(i,s,e) for(long long int i=s;i<e;i++)
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

// int total = 300002;
// vi arr(total, 1);

// void sieve(){
//     for(int i = 2; i <= total; i++){
//         if(arr[i] == 0) continue;

//         for(int j = 2 * i; j <= total; j += i){
//             arr[j] = 0;
//         }
//     }
// }

void solve()
{
    int n;
    cin >> n;

    ull result = n * (n + 1) / 2;

    cout << result % 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // sieve();
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}
