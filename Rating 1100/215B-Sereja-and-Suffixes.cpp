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
    int n , m;
    cin >> n >> m;

    set<int> si;
    vi dp(n);
    vi bucket(100001 , 0);
    vi arr;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
    
        si.insert(number);
        bucket[number]++;
        arr.push_back(number);
    }

    int current = 0;
    for(int i = 0; i < n; i++){
        dp[i] = si.size() - current;

        bucket[arr[i]]--;
        if(bucket[arr[i]] == 0) current++;

        // cout << arr[i] << " " << bucket[arr[i]] << " " << current << endl;
    }

    for(int i = 0; i < m; i++){
        int number;
        cin >> number;

        cout << dp[number - 1] << endl;
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
