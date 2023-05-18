#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

int main()
{
    int n , a , b;

    cin >> n >> a >> b;

    if(n - a > b) cout << b + 1 << endl;
    else if(n - a <= b) {
        cout << n - a << endl;
    }
    
    return 0;
}    
