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
        int n, k;
        cin >> n >> k;

        int answer = 0;

        vi arr(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
            if(arr[i] > k && i < k) answer++;
        }
        
        if(n == k) answer = 0;
        else if( k == 1 && arr[0] != 1) answer = 1;
        cout << answer << endl;
    }   
    
    return 0;
}    