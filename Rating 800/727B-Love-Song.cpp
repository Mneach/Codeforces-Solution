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
    
    int n , q;
    cin >> n >> q;

    string word;
    cin >> word;

    vi arr(word.length() + 1, 0);

    int currentTotal = 0;
    for (int i = 0; i <= word.length(); i++)
    {
        arr[i] = currentTotal;
        currentTotal += (word[i] - 'a') + 1;
    }
    

    for (int i = 0; i < q; i++)
    {
        int l , r;
        cin >> l >> r;

        cout << arr[r] - arr[l - 1] << endl;
    }
    

    return 0;
}    
