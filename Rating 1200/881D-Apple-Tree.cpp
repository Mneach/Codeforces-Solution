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

void dfs(vector<vector<ll>>& arr,vector<ll>& children, int node, int parent){
    
    // arr[child].size() == 1 -> mean that leaf
    // child != 0 -> to check if child is not root
    if(arr[node].size() == 1 && arr[node][0] == parent){
        children[node] = 1;
    }else{
        for(auto child : arr[node]){
            if(child != parent){
                dfs(arr, children, child , node);
                children[node] += children[child];
            }
        }
    }
}

void solve(){
    int n;

    cin >> n;

    vector<vector<ll>> arr(n);

    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;

        x -= 1;
        y -= 1;

        arr[x].push_back(y);
        arr[y].push_back(x);
    }    

    vll children(n , 0);

    dfs(arr, children, 0 , -1);

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int x , y;
        cin >> x >> y;

        x -= 1;
        y -= 1;

        cout << children[x] * children[y] << endl;
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
