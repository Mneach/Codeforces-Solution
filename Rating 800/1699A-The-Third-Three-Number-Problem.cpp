#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        bool answer = false;
        if(n % 2 == 0) answer = true;

        if(answer) cout << 0 << " " << 0 << " " << n / 2 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}    
