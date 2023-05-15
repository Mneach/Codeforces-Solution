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

        vll arr(n);


        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll answer = arr[0];
        for (int i = 0; i < n; i++)
        {
            answer &= arr[i];   
        }

        cout << answer << endl;
    }
    
}    