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

    arr[0] = 1;
    arr[1] = 5;
    
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + (4 * (i));
    }
    
    cout << arr[n - 1] << endl;

    return 0;
}    
