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
        string s;
        cin >> s;

        int checkA = 0;
        int checkB = 0;
        bool valid = true;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a'){
                if(checkB == 1){
                    valid = false;
                    break;
                }

                checkA++;
                checkB = 0;
            }else{
                if(checkA == 1){
                    valid = false;
                    break;
                }

                checkB++;
                checkA = 0;
            }
        }

        if(valid && checkA != 1 && checkB != 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}    
