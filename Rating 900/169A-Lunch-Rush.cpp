#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

int maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

int main()
{
    int n, k;
    cin >> n >> k;

    ll answer = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        int f, t;
        cin >> f >> t;

        if(t > k){
            answer = maxLL(answer , f - (t - k));
        }else{
            answer = maxLL(answer , f);
        }
    }
    
    cout << answer << endl;
    return 0;
}    
