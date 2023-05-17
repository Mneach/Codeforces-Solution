#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

int maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;

        ll diff = abs(a - b);

        if(diff == 0) {
            cout << 0 << " " << 0 << endl;
        }else if(diff == 1){
            cout << 1 << " " << 0 << endl;
        }else{
            
            // a % diff -> upper bound
            // diff - (a % diff) -> lower bound
            
            ll operation = min(a % diff, diff - (a % diff));

            cout << diff << " " << operation << endl;
        }
    }
    

    return 0;
}    
