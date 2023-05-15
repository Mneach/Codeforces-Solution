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
        int n , k;
        cin >> n >> k;

        vi arr;

        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;

            arr.push_back(number);
        }
        
        int totalChange = 0;

        for (int i = 0; i < n; i++)
        {
            if((arr[i] - 1) % k != i % k){
                totalChange++;
            }
        }

        if(totalChange == 0) cout << 0 << endl;
        else if(totalChange == 2) cout << 1 << endl;
        else cout << -1 << endl;        
    }
    
}    