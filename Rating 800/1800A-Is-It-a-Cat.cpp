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
        
        string s;
        cin >> s;
        
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        
        s.erase(unique(s.begin(), s.end()), s.end());
        
        cout << (s == "meow" ? "YES" : "NO") << endl;
    }
    
}    