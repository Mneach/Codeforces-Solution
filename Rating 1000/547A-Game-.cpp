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

    bool check = false;

    if(m % 2 == 0 && m % n == 0) check = true; 
    else if(m % 3 == 0 && m % n == 0) check = true;

    if(check){
        int answer = 0;
        int divisor = m / n;

        while(divisor > 1){
            if(divisor % 3 == 0) divisor /= 3;
            else if(divisor % 2 == 0) divisor /= 2;
            else{
                answer = -1;
                break;
            }
            answer++;
        }

        cout << answer << endl;
    }else if(n == m){
        cout << 0 << endl;
    }else{
        cout << -1 << endl;
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
