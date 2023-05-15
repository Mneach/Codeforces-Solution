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

        string temp = s;
        sort(temp.begin(), temp.end());
        
        int diff = 0;
        for (int j = 0; j < n; j++)
        {
            if(s[j] != temp[j]) diff++;
        }
        
        cout << diff << endl;
    }
    
    return 0;
}    
