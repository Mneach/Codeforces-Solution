#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

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

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n , k;

        cin >> n >> k;

        if(n == k || k == 1 || n % k == 0) {
            cout << 1 << endl;
        }else if(n == 1){
            cout << k << endl;
        }else if(k % n == 0){
            cout << k / n << endl;
        }else if(k < n){
            cout << 2 << endl;
        }else{
            cout << (k / n) + 1 << endl;
        }
    }
    

    return 0;
}
