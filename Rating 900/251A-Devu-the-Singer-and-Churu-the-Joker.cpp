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

    int n, d;
    cin >> n >> d;

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        temp += number;
    }
    
    
    int totalMinute = temp + (n - 1 ) * 10;
    
    if(totalMinute == d){
        cout << 2 * (n - 1) << endl;
    }else if(totalMinute < d){
        int reminder = d - totalMinute;

        cout << 2 * (n - 1) + (reminder / 5) << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
