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

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    int minDiff = INT_MAX;

    int prev = -1;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        int currentDiff = 0;

        if(i != 0){
            if(number != prev) {
                
                int temp = abs(number - prev);

                if(minDiff == INT_MAX) minDiff = temp;
                else{
                    minDiff = gcd(minDiff, temp);
                }
            }
        }

        prev = number;
    }

    if(minDiff == INT_MAX) cout << -1 << endl;
    else cout << minDiff << endl;
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
