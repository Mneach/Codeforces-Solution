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
        int n , m;
        cin >> n >> m;

        int result = 0;

        if(n > m){
            result = (m * 2) + (n - 2);
        }else{
            result = (n * 2) + (m - 2);
        }

        if(n == 1 && m == 1) result = 0;

        cout << result << endl;
    }
    

    return 0;
}    
