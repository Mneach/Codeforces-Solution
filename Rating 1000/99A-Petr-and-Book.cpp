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

    vi arr(7);

    for(int i = 0; i < 7; i++) cin >> arr[i];

    int index = 0;
    while(n > 0){
        n -= arr[index];

        index++;
        index %= 7;
    }

    if(index == 0) index = 7;
    cout << index << endl;
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
