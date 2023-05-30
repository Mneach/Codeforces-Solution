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
        int n;
        cin >> n;

        vi arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if(is_sorted(arr.begin(), arr.end())) cout << 0 << endl;
        else if((arr[0] == 1 || arr[arr.size() - 1] == n)) cout << 1 << endl;
        else if((arr[0] == n && arr[arr.size() - 1] == 1)) cout << 3 << endl;
        else cout << 2 << endl;
    }
        

    return 0;
}
