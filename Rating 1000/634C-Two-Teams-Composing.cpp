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
    int n;
    cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    int maximumSame = 1;
    int diff = 1;

    sort(all(arr));

    int currentSame = 1;
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] == arr[i + 1]){
            currentSame++;
        }else{
            maximumSame = max(maximumSame, currentSame);
            currentSame = 1;
            diff++;
        }
    }

    maximumSame = max(maximumSame , currentSame);
    
    cout << max(min(maximumSame - 1, diff), min(maximumSame, diff - 1)) << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
