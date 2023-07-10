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

double maxDL(double a , double b){
    return (a > b) ? a : b;
}

void solve(){

    int n, m;
    cin >> n;

    vi boys(n);
    for(int i = 0; i < n; i++) cin >> boys[i];

    cin >> m; 
    vi girls(m);
    for(int i = 0; i < m; i++) cin >> girls[i];
    
    sort(all(boys));
    sort(all(girls));

    int indexBoys = 0;
    int indexGirls = 0; 
    int answer = 0;
    while(indexBoys < boys.size() && indexGirls < girls.size()){
        if(abs(boys[indexBoys] - girls[indexGirls]) <= 1){
            answer++;
            indexBoys++;
            indexGirls++;
        }else if(boys[indexBoys] > girls[indexGirls]){
            indexGirls++;
        }else if(boys[indexBoys] < girls[indexGirls]){
            indexBoys++;
        }
    }

    cout << answer << endl;
}

int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
