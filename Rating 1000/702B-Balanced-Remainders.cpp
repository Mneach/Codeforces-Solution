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

    vi counter(3);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] % 3 == i) counter[i]++;
        }
    }

    int answer = 0;
    while(*min_element(counter.begin(), counter.end()) != n / 3){
        for(int i = 0; i < 3; i++){
            if(counter[i] > n / 3){
                answer++;
                counter[i]--;
                counter[(i + 1) % 3]++;
            }
        }
    }

    cout << answer << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
