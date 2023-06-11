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

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(all(arr));

    bool answer = false;
    for (int i = 0; i < n - 2; i++)
    {
        if(arr[i] + arr[i + 1] > arr[i + 2]) answer = true;
    }
    
    if(answer) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
