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
    ll n;
    cin >> n;

    vi arr(n);

    for(ll i = 0; i < n; i++) cin >> arr[i];
    
    ll totalSum = 0;
    ll totalOperation = 0;

    bool check = false;
    for(ll i = 0; i < n; i++){
        
        if(arr[i] < 0 && check == false){
            check = true;
        }else if(arr[i] > 0 && check) {
            check = false;
            totalOperation++;
        }

        totalSum += abs(arr[i]);
    }

    if(check) totalOperation++;

    cout << totalSum << " " << totalOperation << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
