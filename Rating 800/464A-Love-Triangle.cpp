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
    int n;
    cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    bool answer = false;

    for (int i = 0; i < n; i++)
    {
        if(arr[arr[arr[i] - 1] - 1] == i + 1) answer = true;
    }
    
    if(answer) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}    
