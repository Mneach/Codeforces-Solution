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

    ll totalNegative = 0;
    ll totalZero = 0;
    ll answer = 0;

    for (int i = 0; i < n; i++)
    {
        ll number;
        cin >> number;

        if(number < 0) {
            answer += abs((number + 1));
            totalNegative++;
        }else if(number > 0){
            answer += (number - 1);
        }else if(number == 0){
            answer++;
            totalZero++;
        }
    }
    
    if(totalNegative % 2 != 0 && totalZero == 0) answer += 2;

    cout << answer << endl;

    return 0;
}    
