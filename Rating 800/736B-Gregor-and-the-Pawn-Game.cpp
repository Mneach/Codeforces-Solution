#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

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

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s , t;

        cin >> s >> t;
        
        if(n == 1){
            if(t[0] == '1' && s[i] == '0') {
                cout << 1 << endl;
                continue;
            }
        }

        int answer = 0;
        for (int j = 0; j < n; j++)
        {
            if(t[j] == '1'){
                if(j == 0){
                    if(s[j] == '0'){
                        s[j] = '2';
                        answer++;
                    }else if(s[j + 1] == '1'){
                        s[j + 1] = '2';
                        answer++;
                    }
                }else if(j == n - 1){
                     if(s[j] == '0'){
                        s[j] = '2';
                        answer++;
                    }else if(s[j - 1] == '1'){
                        s[j - 1] = '2';
                        answer++;
                    }                   
                }else{
                    if(s[j - 1] == '1'){
                        s[j - 1] = '2';
                        answer++;
                    }else if(s[j] == '0'){
                        s[j] = '2';
                        answer++;
                    }else if(s[j + 1] == '1'){
                        s[j + 1] = '2';
                        answer++;
                    }                    
                }
            }
        }
        
        cout << answer << endl;
    }
    

    return 0;
}
