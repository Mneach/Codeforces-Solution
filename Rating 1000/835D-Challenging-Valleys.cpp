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
    int n;
    cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    if(n == 1) {
        cout << "YES" << endl;
        return;
    }

    int currentIndex = 0;
    int totalValid = 0;

    while(currentIndex < n){
        // cout << currentIndex << " " ;
        if(currentIndex == 0){
            while(currentIndex < n - 2 && arr[currentIndex] == arr[currentIndex + 1]) currentIndex++;
            if(arr[currentIndex] < arr[currentIndex + 1]) totalValid++;
            currentIndex++;
        }else if(currentIndex == n - 1){
            if(arr[currentIndex] < arr[currentIndex - 1]) totalValid++;
            currentIndex++;
        }else{
            if(arr[currentIndex] < arr[currentIndex + 1] && arr[currentIndex - 1] > arr[currentIndex]){
                totalValid++;
            } else {
                int temp = currentIndex;
                while(currentIndex < n - 2 && arr[currentIndex] == arr[currentIndex + 1]) currentIndex++;
                if(arr[temp - 1] > arr[temp] && arr[temp] < arr[currentIndex + 1] && temp != currentIndex) totalValid++;
            }
            currentIndex++;
        }
        // cout << totalValid << " " << endl;
    }

    if(totalValid == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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
