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
    int n , m , x, y;
    cin >> n >> m >> x >> y;

    vs map(n);

    for(int i = 0; i < n; i++){
        cin >> map[i];
    }

    int answer = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j == m - 1){
                if(map[i][j] == '.') answer += x;
            }else{
                if(map[i][j] == '.' && map[i][j + 1] == '.'){
                   answer += min(x * 2, y); 
                    j++;
                }else if(map[i][j] == '.'){
                    answer += x;
                }
            }
        }
    }

    cout << answer << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
}
