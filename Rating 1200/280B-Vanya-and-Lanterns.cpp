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
#define endl "\n";

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
    int n, l;

    cin >> n >> l;

    vi arr(n);

    for(int i = 0 ; i < n; i++) cin >> arr[i];

    sort(all(arr));

    double maximumDistance = 0;

    for(int i = 0; i < n - 1; i++){
        maximumDistance = maxDL(maximumDistance, arr[i + 1] - arr[i]);
    }   

    if(arr[0] != 0){
        maximumDistance = maxDL(maximumDistance, (double) arr[0] * 2);
    }
    
    if(arr[arr.size() - 1] != l){
        maximumDistance = maxDL(maximumDistance, (l - arr[arr.size() - 1]) * 2);
    }

    double answer = maximumDistance / 2;

    cout << fixed << setprecision(2) << answer << endl;
}

int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
