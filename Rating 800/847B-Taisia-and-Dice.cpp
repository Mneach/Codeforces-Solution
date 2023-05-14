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
        int n, s, r;
        cin >> n >> s >> r;

        vector<int> arr(n , s - r);
        int current = n * (s - r) - s;

        for (int i = 0; i < n; i++)
        {
            int takeDice = min(arr[i] - 1, current);
            arr[i] -= takeDice;
            current -= takeDice;
        }
        
        for (int i = 0; i < n; i++)
        {
            if(n == -1) cout << arr[i] << endl;
            else cout << arr[i] << " ";
        }
    }
    
    return 0;
}    
