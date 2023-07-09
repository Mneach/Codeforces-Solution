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
    int planned, specialTicket, priceNormal, priceSpecial;

    cin >> planned >> specialTicket >> priceNormal >> priceSpecial;

    int currentTotalTicket = 0;
    int answer = 0;
    if(priceNormal * specialTicket >= priceSpecial){
        int temp = planned / specialTicket; 
        currentTotalTicket = temp * specialTicket;
        answer = temp * priceSpecial;

        int reminder = planned - currentTotalTicket;

        if(reminder > 0){
            if(reminder * priceNormal < priceSpecial) answer += reminder * priceNormal;
            else answer += priceSpecial; 
        } 
        
     }else{
        currentTotalTicket = planned;
        answer = planned * priceNormal;
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
