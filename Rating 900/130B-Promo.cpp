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

long long calculate(int x){
    if(x <= 0) return 0;

    long long result = 0;

    for(int i = 1; i <= x; i++){
        result += i;
    }

    return result;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, q;
    cin >> n >> q;

    vll arr(n), prefix(n + 1, 0);

    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(all(arr));


    // do prefix sum
    for(int i = 1; i < n + 1; i++){
        prefix[i] = arr[i - 1] + prefix[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int y, x;
        cin >> y >> x;

        cout << prefix[n - y + x] - prefix[n - y] << endl;
    }
    
    
    return 0;
}
