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
    int n, a , b;
    cin >> n >> a >> b;

    string arr;
    cin >> arr;
    
    if(b >= 0){
        cout << (b * n) + (a * n) << endl;
    }else{
        int currentNumber = arr[0];
        int totalCurrentNumber = n;
        int totalDiffNumber = 0;
        int answer = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] != currentNumber){
                totalCurrentNumber--;
                totalDiffNumber++;
            }else{
                if(totalDiffNumber != 0){
                    answer += (totalDiffNumber * a) + b;
                    totalDiffNumber = 0;
                }
            }
            
        }

        if(totalDiffNumber != 0) answer += (totalDiffNumber * a) + b;
        
        answer += (totalCurrentNumber * a) + b;

        cout << answer << endl; 
    }
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
