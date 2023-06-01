#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

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

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;

        ull sum = 0;
        ull maximum = 0;

        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;

            if(number % x == 0) maximum += number / x;
            else maximum += (number / x) + 1;

            sum += number;
        }
        
        if(sum % x != 0) sum = (sum / x) + 1;
        else sum /= x;

        cout << sum << " " << maximum << endl;
    }
    
    
    return 0;
}
