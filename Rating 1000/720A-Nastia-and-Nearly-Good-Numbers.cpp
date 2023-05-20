#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ull a , b;
        cin >> a >> b;

        if(b == 1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << a << " " << a * b << " " << (a * b) + a << endl;
        }
    }
    

    return 0;
}
