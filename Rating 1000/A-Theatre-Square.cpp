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
    double n , m , a;
 
    cin >> n >> m >> a;
 
    ll answer = ceil(m / a) * ceil(n / a);
 
    cout << answer << endl;
}    