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

        long long negatif = 0;
        long long positif = 0;

        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;
            
            if(number > 0) positif += number;
            else negatif += number;
        }
        
        cout << abs(positif - abs(negatif)) << endl;
    }
    

    return 0;
}    
