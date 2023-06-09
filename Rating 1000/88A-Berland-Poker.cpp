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

long long calculate(int x){
    if(x <= 0) return 0;

    long long result = 0;

    for(int i = 1; i <= x; i++){
        result += i;
    }

    return result;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int cardEachPlayer = n / k;

        if(m <= cardEachPlayer) cout << m << endl;
        else{
            int reminder = m - cardEachPlayer;
            int currentTotalPlayer = k - 1;
            int jokerEachPlayer;
            
            if(reminder % currentTotalPlayer == 0) jokerEachPlayer = reminder / currentTotalPlayer;
            else jokerEachPlayer = (reminder / currentTotalPlayer) + 1;

            cout << cardEachPlayer - jokerEachPlayer << endl;
        }
    }
    
    return 0;
}
