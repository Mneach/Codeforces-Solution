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

    int n;
    cin >> n;

    vi shop(n);

    int maximum = -1;
    for(int i = 0; i < n; i++) {
        cin >> shop[i];

        maximum = max(maximum , shop[i]);
    }
    
    sort(all(shop));
    
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int number;
        cin >> number;

        int answer = upper_bound(shop.begin(), shop.end(), number) - shop.begin();

        cout << answer << endl;
    }
    

    return 0;
}
