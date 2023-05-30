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

    int n , k;
    cin >> n >> k;

    vi arr(n);
    vi result;

    for (int i = 0; i < n; i++) cin >> arr[i];

    int currentIndex = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += arr[i];

        if(i >= k - 1){
            if(i != k - 1) temp -= arr[i - k];
            result.push_back(temp);
            currentIndex++;
        }
    }

    int answer = 0;
    ll minimum = LONG_LONG_MAX;

    for (int i = 0; i < result.size(); i++)
    {
        if(minimum > result[i]) {
            minimum = result[i];
            answer = i + 1;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
