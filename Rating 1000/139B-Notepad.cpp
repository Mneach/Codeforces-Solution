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
#define endl "\n";

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

    string s;
    cin >> s;

    bool check = false;

    string temp = "";
    
    if(s.length() <= 2) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < s.length() - 1; i++){
        string currFind = "";
        currFind += s[i];
        currFind += s[i + 1];

        if(temp.find(currFind) != string::npos) {
            check = true;
            break;
        }else{
            temp += s[i];
        }
    }

    if(check) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
