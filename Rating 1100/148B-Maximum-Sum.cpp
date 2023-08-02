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

    vll arr(n);

    ll total = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        total += arr[i];
    }

    sort(all(arr));

    vll arrLeft(k);
    vll arrRight;

    int indexLeft = 0;
    for(int i = 0; i < k; i++){

        if(i == 0){
            arrLeft[i] = arr[indexLeft] + arr[indexLeft + 1];
        }else{
            arrLeft[i] = arr[indexLeft] + arr[indexLeft + 1] + arrLeft[i - 1];
        }
        indexLeft += 2;
    }

    int indexRight = arr.size() - 1;
    for(int i = 0; i < k; i++){
        if(i == 0){
            arrRight.push_back(arr[indexRight]);
        }else{
            arrRight.push_back(arr[indexRight] + arrRight[i - 1]);
        }
        indexRight--;
    }

    // for(int i = 0; i < arrLeft.size(); i++) cout << arrLeft[i] << " " ;
    // cout << endl;

    // for(int i = 0; i < arrRight.size(); i++) cout << arrRight[i] << " " ;
    // cout << endl;

    indexLeft = 0;
    indexRight = arrRight.size() - 2;

    ll answer = 0;
    for(int i = 0; i < k + 1; i++){

        if(i == 0){
            answer = max(total - arrLeft[arrLeft.size() - 1], answer);
        }else if(i == k){
            answer = max(total - arrRight[arrRight.size() - 1], answer);
        }else{
            answer = max(total - (arrLeft[indexLeft] + arrRight[indexRight]), answer);
            indexLeft++;
            indexRight--;
        }
    }
    
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
