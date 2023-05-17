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

    int t;
    cin >> t;
    
    vll dp(101, 0);

    for (int i = 1; i < 101; i++)
    {
        dp[i] = dp[i - 1] + i;
    }

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vll arr(n);

        for(int j = 0; j < n; j++) cin >> arr[j];

        ll sum = 0;
        ll need = 0;
        bool answer = true;
        for (int j = 0; j < n; j++)
        {
            need += j;
            sum += arr[j];
            if(sum < need){
                answer = false;
                break;
            }
        }
        
        if(answer) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    

    return 0;
}    
