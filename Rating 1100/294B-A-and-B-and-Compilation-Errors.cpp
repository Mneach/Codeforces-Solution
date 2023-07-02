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
    int n;
    cin >> n;

    vi arr1, arr2, arr3;
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        
        arr1.push_back(number);
    }

    for(int i = 0; i < n - 1; i++){
        int number;
        cin >> number;
        
        arr2.push_back(number);
    }

    for(int i = 0; i < n - 2; i++){
        int number;
        cin >> number;
        
        arr3.push_back(number);
    }        

    sort(all(arr1));
    sort(all(arr2));
    sort(all(arr3));

    vi answer(2, 0);

    answer[0] = arr1[n - 1];
    answer[1] = arr2[n - 2];

    for(int i = 0; i < n - 1; i++){
        if(arr1[i] != arr2[i]) {
            answer[0] = arr1[i];
            break;
        }
    }

    for(int i = 0; i < n - 2; i++){
        if(arr2[i] != arr3[i]) {
            answer[1] = arr2[i];
            break;
        }
    }

    cout << answer[0] << endl;
    cout << answer[1] << endl;
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
