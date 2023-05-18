#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        ull answer = 0;
        ull startDiv = n / 2;
        ull startMultiple = 8 * startDiv;

        while(startDiv > 0){
            answer += startMultiple * startDiv;

            startMultiple -= 8;
            startDiv--;
        }

        cout << answer << endl;
    }
    
    
    return 0;
}    
