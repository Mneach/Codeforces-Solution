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

void appendBit(string &x, int size){
    string temp = "";

    for(int i = minLL(x.length(), size); i < maxLL(x.length(), size); i++){
        temp += "0";
    }
    x = temp + x;
}

void solve()
{
    int n, m , k;
    cin >> n >> m >> k;

    vi arr;

    int maximumBit = 0;
    for(int i = 0; i < m + 1; i++){
        int x;
        cin >> x;

        arr.push_back(x);
    }

    int fedorSoldier = arr[arr.size() - 1];
    int answer = 0;
    for(int i = 0; i < m; i++){

        int temp = fedorSoldier ^ arr[i];

        int diff = 0;
        int index = 0;

        while(temp > 0 && index < n){
            if(temp % 2 == 1) diff++;
            temp /= 2;
        }

        if(diff <= k) answer++;
    }

    cout << answer << endl;
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
