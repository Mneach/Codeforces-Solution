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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int answer = INT_MAX;
    int currentAnswer = 0;

    for(int i = 0; i < s.length(); i++){
        if(i < k){
            if(s[i] == 'W') currentAnswer++; 
        }else{
            answer = min(currentAnswer, answer);
            if(s[i] == 'W') currentAnswer++;
            if(s[i - k] == 'W') currentAnswer--;
        }
    }

    answer = min(currentAnswer, answer);

    cout << answer << endl;
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
