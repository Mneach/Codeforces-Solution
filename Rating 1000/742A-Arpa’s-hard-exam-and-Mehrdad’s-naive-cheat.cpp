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
    
    if(n == 0) cout << 1 << endl;
    else if(n % 4 == 0) cout << 6 << endl;    
    else if(n % 4 == 1) cout << 8 << endl;
    else if(n % 4 == 2) cout << 4 << endl;
    else if(n % 4 == 3) cout << 2 << endl;

}    