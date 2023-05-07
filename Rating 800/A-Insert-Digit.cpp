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
        int n , d;
        cin >> n >> d;

        string s;
        cin >> s;

        bool checkInsert = false;

        for (int j = 0; j < n - 1; j++)
        {
            if(s[j] - '0' < d && checkInsert == false){
                cout << d;
                checkInsert = true;
            }

            cout << s[j];
        }

        if(checkInsert == false){
            if(s[n - 1] - '0' > d) cout << s[n - 1] << d;
            else cout << d << s[n - 1] ;
        }else{
            cout << s[n - 1];
        }
        
        cout << endl;
    }
    
}    