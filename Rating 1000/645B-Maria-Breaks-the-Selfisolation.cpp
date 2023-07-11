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
// #define endl "\n";

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

double maxDL(double a , double b){
    return (a > b) ? a : b;
}

void solve(){

    int n;
    cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(all(arr));
    int current = 0;
    int index = 0;
    while(arr[index] == 1){
        current++;
        index++;
    }
    
    int temp = 1;
    for(int i = index; i < n ;i++){
        int currenetTotal = current + temp;
        
        if(currenetTotal >= arr[i]){
            if(temp == 0) current++;
            else current += temp;
            temp = 1;
        }else{
            temp++;
        }
    }

    cout << current + 1 << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
