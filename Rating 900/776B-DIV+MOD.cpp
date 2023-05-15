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
        int l, r, a;
        cin >> l >> r >> a;

        int leftDiv = 0;

        if(((r / a) * a) - 1 >= l){
            leftDiv = (r / a) - 1 + (a - 1);
        }else{
            leftDiv = (l / a) + (l % a);
        }

        int answer = max( leftDiv, (r / a) + (r % a));

        // checkAnswer(answer);
        cout << answer << endl;
    }
    
    return 0;
}    
