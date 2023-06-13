#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpi;

#define checkAnswer(x)  cout << "Answer : " << x << endl;
#define all(x) x.begin(), x.end()

ull maxULL(ull a , ull b){
    return (a > b) ? a : b;
}

ull minULL(ull a , ull b){
    return (a > b) ? b : a;
}

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

ll minLL(ll a , ll b){
    return (a > b) ? b : a;
}

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

        int firstLetterPosition = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'B' || s[i] == 'R') {
                firstLetterPosition = i;
                break;
            }
        }

        if(firstLetterPosition == -1){
            for (int i = 0; i < n; i++)
            {
                if(i % 2 == 0) cout << 'B';
                else cout << 'R';
            }
        }else{
            string firstLetter = "";
            string secondLetter = "";
            char last = s[firstLetterPosition];

            for(int i = firstLetterPosition - 1; i >= 0; i--){
                if(last == 'B') {
                    firstLetter += 'R';
                    last = 'R';
                }else if(last == 'R'){
                    firstLetter += 'B';
                    last = 'B';
                }
            }

            reverse(firstLetter.begin(), firstLetter.end());
            firstLetter += s[firstLetterPosition];

            last = s[firstLetterPosition];
            for(int i = firstLetterPosition + 1; i < s.length(); i++){
                if(s[i] != '?'){
                    last = s[i];
                    secondLetter += s[i];
                }else if(s[i] == '?'){
                    if(last == 'B') {
                        secondLetter += 'R';
                        last = 'R';
                    }else if(last == 'R'){
                        secondLetter += 'B';
                        last = 'B';
                    }                    
                }
            }

            string result = firstLetter + secondLetter;
            cout << result;
        }

        cout << endl;
    }
    
}
