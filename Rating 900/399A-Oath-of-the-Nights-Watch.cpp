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
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sort(all(arr));

    if(n <= 2) cout << 0 << endl;
    else {
        int answer = 0;

        for(int j = 1; j < n - 1; j++){
            if(arr[0] < arr[j] && arr[j] < arr[arr.size() - 1]) answer++;
        }  
        cout << answer << endl;
    }
}
